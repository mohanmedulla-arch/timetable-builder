#include <iostream>
#include <limits>
#include "Timetable.h"

int getInt(const std::string& prompt) {
    int value;
    while (true) {
        std::cout << prompt;
        std::cin >> value;

        if (std::cin) return value;

        std::cout << "Invalid input. Try again.\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}

std::string getLine(const std::string& prompt) {
    std::string input;
    std::cout << prompt;
    std::getline(std::cin >> std::ws, input);
    return input;
}

void showMenu() {
    std::cout << "\n=== TIMETABLE MENU ===\n";
    std::cout << "1. Add Course\n";
    std::cout << "2. View Courses\n";
    std::cout << "3. Delete Course\n";
    std::cout << "4. Edit Course\n";
    std::cout << "5. Export CSV\n";
    std::cout << "6. Exit\n";
}

int main() {
    Timetable timetable;

    while (true) {
        showMenu();
        int choice = getInt("Enter choice: ");

        if (choice == 1) {
            std::string name = getLine("Course name: ");
            std::string lecturer = getLine("Lecturer: ");
            std::string room = getLine("Room: ");
            std::string day = getLine("Day: ");
            std::string time = getLine("Time: ");

            Course c(name, lecturer, room, day, time);
            timetable.addCourse(c);
        }
        else if (choice == 2) {
            timetable.viewCourses();
        }
        else if (choice == 3) {
            timetable.viewCourses();
            int index = getInt("Enter index to delete: ");
            timetable.deleteCourse(index);
        }
        else if (choice == 4) {
            timetable.viewCourses();
            int index = getInt("Enter index to edit: ");
            timetable.editCourse(index);
        }
        else if (choice == 5) {
            std::string filename = getLine("Enter filename: ");
            timetable.exportCSV(filename);
        }
        else if (choice == 6) {
            break;
        }
        else {
            std::cout << "Invalid choice.\n";
        }
    }

    return 0;
}