#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
public:
    std::string name;
    std::string lecturer;
    std::string room;
    std::string day;
    std::string time;

    Course() = default;

    Course(const std::string& n,
           const std::string& l,
           const std::string& r,
           const std::string& d,
           const std::string& t)
        : name(n), lecturer(l), room(r), day(d), time(t) {}
};

#endif