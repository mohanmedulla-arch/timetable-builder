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
    void deleteCourse(int index);
    void editCourse(int index);
    bool hasClash(const Course& course) const;
    void exportCSV(const std::string& filename) const;
};

#endif