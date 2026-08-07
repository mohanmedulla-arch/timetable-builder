Department Timetable Builder

This is my first C++ project built using CMake. I made it to practice object oriented programming, working with multiple files, and using Git and GitHub.

The program runs in the command line and helps build a simple department timetable.

What it can do

It allows a user to add courses, enter lecturers, enter rooms, and enter the day and time for each course. It can detect room clashes and lecturer clashes, display all saved courses, and export the timetable to a CSV file.

What I used

C++, CMake, g++, Git, and GitHub CLI.

How to build the project

Open a terminal in the project folder and run these commands.

mkdir build
cd build
cmake -G "MinGW Makefiles" ..
cmake --build .

How to run the program

./timetable.exe

What I learned

This project helped me understand how to organize a C++ program into multiple files, use classes and structures, work with vectors, read user input, write data to a CSV file, and build projects using CMake.

Future improvements

I would like to add editing and deleting courses, saving data automatically, and eventually build a graphical user interface.

Author

Mohamed Abdullahi