#include "Timetable.h"
#include <iostream>
#include <fstream>
#include <cstdio>

bool Timetable::isValidIndex(size_t index) const {
    return index < courses.size();
}

void Timetable::addCourse(const Course& course) {
    if (hasClash(course)) {
        std::cout << "Clash detected! Course not added.\n";
        return;
    }

    courses.push_back(course);
    std::cout << "Course added successfully.\n";
}

bool Timetable::hasClash(const Course& c) const {
    auto parseTime = [](const std::string& t) {
        int sh, sm, eh, em;
        sscanf(t.c_str(), "%d:%d-%d:%d", &sh, &sm, &eh, &em);
        return std::pair<int,int>(sh*60+sm, eh*60+em);
    };

    auto [ns, ne] = parseTime(c.time);

    for (const auto& e : courses) {
        if (e.day == c.day) {
            auto [es, ee] = parseTime(e.time);

            bool overlap = (ns < ee && ne > es);

            if (overlap && (e.room == c.room || e.lecturer == c.lecturer)) {
                return true;
            }
        }
    }
    return false;
}

void Timetable::viewCourses() const {
    if (courses.empty()) {
        std::cout << "No courses available.\n";
        return;
    }

    std::cout << "Index | Course | Lecturer | Room | Day | Time\n";
    std::cout << "--------------------------------------------------------\n";

    for (size_t i = 0; i < courses.size(); ++i) {
        const auto& c = courses[i];
        std::cout << i << " | "
                  << c.name << " | "
                  << c.lecturer << " | "
                  << c.room << " | "
                  << c.day << " | "
                  << c.time << "\n";
    }
}

void Timetable::deleteCourse(size_t index) {
    if (!isValidIndex(index)) {
        std::cout << "Invalid index.\n";
        return;
    }

    courses.erase(courses.begin() + index);
    std::cout << "Course deleted.\n";
}

void Timetable::editCourse(size_t index) {
    if (!isValidIndex(index)) {
        std::cout << "Invalid index.\n";
        return;
    }

    Course temp = courses[index];

    std::cout << "Editing course: " << temp.name << "\n";

    std::cout << "New name: ";
    std::getline(std::cin >> std::ws, temp.name);

    std::cout << "New lecturer: ";
    std::getline(std::cin >> std::ws, temp.lecturer);

    std::cout << "New room: ";
    std::getline(std::cin >> std::ws, temp.room);

    std::cout << "New day: ";
    std::getline(std::cin >> std::ws, temp.day);

    std::cout << "New time (HH:MM-HH:MM): ";
    std::getline(std::cin >> std::ws, temp.time);

    if (hasClash(temp)) {
        std::cout << "Clash detected! Changes not saved.\n";
        return;
    }

    courses[index] = temp;
    std::cout << "Course updated.\n";
}

void Timetable::exportCSV(const std::string& filename) const {
    std::ofstream file(filename);

    if (!file.is_open()) {
        std::cout << "Error opening file.\n";
        return;
    }

    file << "Name,Lecturer,Room,Day,Time\n";

    for (const auto& c : courses) {
        file << c.name << ","
             << c.lecturer << ","
             << c.room << ","
             << c.day << ","
             << c.time << "\n";
    }

    file.close();
    std::cout << "Exported to " << filename << "\n";
}

void Timetable::saveToFile(const std::string& filename) const {
    std::ofstream file(filename);

    for (const auto& c : courses) {
        file << c.name << "|"
             << c.lecturer << "|"
             << c.room << "|"
             << c.day << "|"
             << c.time << "\n";
    }
}

void Timetable::loadFromFile(const std::string& filename) {
    std::ifstream file(filename);

    if (!file.is_open()) return;

    courses.clear();

    std::string line;
    while (std::getline(file, line)) {
        std::vector<std::string> parts;
        size_t pos;

        while ((pos = line.find('|')) != std::string::npos) {
            parts.push_back(line.substr(0, pos));
            line.erase(0, pos + 1);
        }
        parts.push_back(line);

        if (parts.size() == 5) {
            courses.emplace_back(parts[0], parts[1], parts[2], parts[3], parts[4]);
        }
    }
}