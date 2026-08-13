# Department Timetable Builder

A simple command-line application written in C++ for creating and managing a department timetable.

This project allows a user to add courses, assign lecturers, rooms, days and time slots, view saved entries, detect scheduling conflicts, and export the timetable to a CSV file.

---

## What the program does

The application runs in the terminal and presents a menu where the user can:

- Add a course
- View all courses
- Edit a course
- Delete a course
- Export the timetable to a CSV file

Each course contains:

- Course name  
- Lecturer  
- Room  
- Day  
- Time  

---

## Key feature

The program checks for clashes before adding a course.

If two courses are scheduled:

- in the same room  
- on the same day  
- at overlapping times  

the system will reject the new course and show a message.

---

## Example

```
Room clash with course: Mathematics
Clash detected! Course not added.
```

---

## How to build the project

Open a terminal inside the project folder and run:

```
mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build .
```

---

## How to run

```
./timetable.exe
```

---

## Technologies used

- C++
- CMake
- GCC
- Git
- GitHub


## What I learned

While building this project I practiced:

- Object oriented programming in C++
- Working with multiple files
- Using vectors and classes
- Handling user input safely
- Writing data to files (CSV)
- Building projects using CMake
- Using Git and GitHub for version control


## Future improvements

- Save and load data automatically
- Improve timetable display format
- Add better validation for time input
- Add a graphical user interface



## Author

Mohamed Abdullahi