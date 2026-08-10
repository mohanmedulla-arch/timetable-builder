#ifndef TIMETABLE_H
#define TIMETABLE_H

#include "Course.h"
#include <vector>
#include <string>

class Timetable {
private:
    std::vector<Course> courses;

public:
    void addCourse(const Course& course);
    void viewCourses() const;
    void deleteCourse(size_t index);
    void editCourse(size_t index);
    bool hasClash(const Course& course) const;
    void exportCSV(const std::string& filename) const;
    bool isValidIndex(size_t index) const;

    void saveToFile(const std::string& filename) const;
    void loadFromFile(const std::string& filename);
};

#endif