#include "Timetable.h"
#include <iostream>
#include <fstream>

void Timetable::addCourse(const Course& course) {
    if (hasClash(course)) {
        std::cout << "Clash detected! Course not added.\n";
        return;
    }
    courses.push_back(course);
    std::cout << "Course added successfully.\n";
}

bool Timetable::hasClash(const Course& c) const {
    for (const auto& existing : courses) {
        if (existing.day == c.day && existing.time == c.time) {
            if (existing.room == c.room || existing.lecturer == c.lecturer) {
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

    for (size_t i = 0; i < courses.size(); ++i) {
        const auto& c = courses[i];
        std::cout << i << ". "
                  << c.name << " | "
                  << c.lecturer << " | "
                  << c.room << " | "
                  << c.day << " | "
                  << c.time << "\n";
    }
}

void Timetable::deleteCourse(int index) {
    if (index < 0 || index >= (int)courses.size()) {
        std::cout << "Invalid index.\n";
        return;
    }
    courses.erase(courses.begin() + index);
    std::cout << "Course deleted.\n";
}

void Timetable::editCourse(int index) {
    if (index < 0 || index >= (int)courses.size()) {
        std::cout << "Invalid index.\n";
        return;
    }

    Course& c = courses[index];

    std::cout << "Editing course: " << c.name << "\n";

    std::cout << "Enter new name: ";
    std::getline(std::cin >> std::ws, c.name);

    std::cout << "Enter new lecturer: ";
    std::getline(std::cin >> std::ws, c.lecturer);

    std::cout << "Enter new room: ";
    std::getline(std::cin >> std::ws, c.room);

    std::cout << "Enter new day: ";
    std::getline(std::cin >> std::ws, c.day);

    std::cout << "Enter new time: ";
    std::getline(std::cin >> std::ws, c.time);

    std::cout << "Course updated.\n";
}

void Timetable::exportCSV(const std::string& filename) const {
    std::ofstream file(filename);

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