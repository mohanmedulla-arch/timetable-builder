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

    Course(std::string n, std::string l, std::string r,
           std::string d, std::string t)
        : name(n), lecturer(l), room(r), day(d), time(t) {}
};

#endif