```markdown

\# Department Timetable Builder



A C++ command-line application for creating and managing department timetables.



The Department Timetable Builder allows users to enter courses, lecturers, rooms, days, and time slots, detect timetable clashes, view saved courses, and export timetable information to a CSV file.



This project is also a practical learning project focused on C++, Object-Oriented Programming, data structures, file handling, CMake, Git, GitHub, debugging, input validation, and software project organization.



\---



\## Table of Contents



\- \[Overview](#overview)

\- \[Problem Statement](#problem-statement)

\- \[Objectives](#objectives)

\- \[Features](#features)

\- \[How It Works](#how-it-works)

\- \[Clash Detection](#clash-detection)

\- \[Technologies Used](#technologies-used)

\- \[Development Environment](#development-environment)

\- \[Project Structure](#project-structure)

\- \[Source Code](#source-code)

\- \[Build Requirements](#build-requirements)

\- \[Installation](#installation)

\- \[Building the Project](#building-the-project)

\- \[Running the Application](#running-the-application)

\- \[Example Usage](#example-usage)

\- \[Input Validation](#input-validation)

\- \[CSV Export](#csv-export)

\- \[Error Handling](#error-handling)

\- \[Development Workflow](#development-workflow)

\- \[Git and GitHub](#git-and-github)

\- \[Testing](#testing)

\- \[Current Limitations](#current-limitations)

\- \[Future Improvements](#future-improvements)

\- \[Roadmap](#roadmap)

\- \[Learning Objectives](#learning-objectives)

\- \[Software Engineering Practices](#software-engineering-practices)

\- \[Versioning](#versioning)

\- \[Contributing](#contributing)

\- \[License](#license)

\- \[Author](#author)

\- \[Project Status](#project-status)



\---



\# Overview



The Department Timetable Builder is a command-line application written in C++.



The application is designed to simplify the management of basic academic timetable information.



A user can create timetable entries containing:



\- Course name

\- Lecturer

\- Room

\- Day

\- Time



The application stores the entered information, allows the user to view courses, checks for common timetable conflicts, and provides an option to export timetable information to CSV format.



The project is being developed incrementally, with the aim of improving both the application's functionality and its underlying software architecture.



\---



\# Problem Statement



Creating a department timetable manually can become difficult when many courses, lecturers, rooms, and time slots are involved.



A timetable needs to avoid situations such as:



\- A room being assigned to two courses at the same time.

\- A lecturer being assigned to two courses at the same time.

\- Invalid or incomplete timetable information.

\- Difficulty reviewing and organizing timetable entries.



This project provides a simple software-based approach to managing timetable information and detecting common scheduling conflicts.



The current application focuses on the core timetable-management problem while providing a foundation for more advanced scheduling features in the future.



\---



\# Objectives



The main objectives of this project are:



1\. Build a functional timetable management application using C++.

2\. Practice Object-Oriented Programming.

3\. Learn how to organize a C++ project using multiple source and header files.

4\. Practice working with structures, classes, vectors, and functions.

5\. Implement timetable clash detection.

6\. Implement CSV file export.

7\. Practice input validation and error handling.

8\. Learn how to use CMake to build a C++ project.

9\. Use Git for version control.

10\. Host and maintain the project on GitHub.

11\. Apply software engineering principles to a real project.

12\. Gradually develop the application into a stronger C++ portfolio project.



\---



\# Features



\## Current Features



The current version supports:



\- Add courses

\- Store course names

\- Assign lecturers

\- Assign rooms

\- Assign days

\- Assign time slots

\- Detect room clashes

\- Detect lecturer clashes

\- View saved courses

\- Export timetable data to CSV

\- Validate menu input

\- Command-line interaction



\---



\# How It Works



When the application starts, it displays a command-line menu.



The user selects an operation by entering the corresponding menu number.



A typical interface looks like:



&#x20;   ==============================

&#x20;         TIMETABLE BUILDER

&#x20;   ==============================

&#x20;   1. Add Course

&#x20;   2. View Courses

&#x20;   3. Delete Course

&#x20;   4. Edit Course

&#x20;   5. Export CSV

&#x20;   6. Exit

&#x20;   ==============================

&#x20;   Enter choice:



When adding a course, the application collects information such as:



&#x20;   Course name

&#x20;   Lecturer

&#x20;   Room

&#x20;   Day

&#x20;   Time



The information is then stored as a timetable entry.



The application can compare the new entry with existing entries to determine whether a conflict exists.



\---



\# Clash Detection



Clash detection is one of the main functions of the application.



The current system focuses on two main types of clashes:



\- Room clashes

\- Lecturer clashes



\## Room Clash



A room clash occurs when two courses attempt to use the same room at the same day and time.



Example:



&#x20;   Course A

&#x20;   Room: Lab 1

&#x20;   Day: Monday

&#x20;   Time: 10:00 - 12:00



and:



&#x20;   Course B

&#x20;   Room: Lab 1

&#x20;   Day: Monday

&#x20;   Time: 10:00 - 12:00



The application identifies this as a room conflict.



\## Lecturer Clash



A lecturer clash occurs when the same lecturer is assigned to two courses at the same day and time.



Example:



&#x20;   Course A

&#x20;   Lecturer: Dr. Ahmed

&#x20;   Day: Tuesday

&#x20;   Time: 08:00 - 10:00



and:



&#x20;   Course B

&#x20;   Lecturer: Dr. Ahmed

&#x20;   Day: Tuesday

&#x20;   Time: 08:00 - 10:00



The application identifies this as a lecturer conflict.



\## Planned Clash Detection Improvements



Future versions may support:



\- Student group clashes

\- Time-overlap detection

\- Lecturer availability

\- Room availability

\- Room capacity

\- Room type requirements

\- Working-hour restrictions

\- More advanced scheduling constraints



\---



\# Technologies Used



| Technology | Purpose |

|---|---|

| C++ | Application development |

| C++ Standard Library | Data structures and utilities |

| CMake | Build system |

| GCC | C++ compiler |

| MSYS2 UCRT64 | Development environment |

| Git | Version control |

| GitHub | Source code hosting |

| GitHub CLI | GitHub command-line operations |

| CSV | Timetable data export |



\---



\# Development Environment



The project is currently developed using:



\*\*Operating System\*\*



Windows 11 Pro



\*\*Development Environment\*\*



MSYS2 UCRT64



\*\*Compiler\*\*



GCC 16.1.0



\*\*Build System\*\*



CMake



\*\*Version Control\*\*



Git



\*\*Repository Hosting\*\*



GitHub



\---



\# Project Structure



&#x20;   timetable-builder/

&#x20;   │

&#x20;   ├── main.cpp

&#x20;   ├── Course.h

&#x20;   ├── Timetable.h

&#x20;   ├── Timetable.cpp

&#x20;   ├── CMakeLists.txt

&#x20;   ├── README.md

&#x20;   ├── .gitignore

&#x20;   │

&#x20;   └── build/



The project is separated into multiple source and header files to keep the code organized and maintainable.



\---



\# Source Code



\## main.cpp



Contains the main entry point of the application.



Responsibilities include:



\- Starting the program

\- Displaying the menu

\- Receiving user input

\- Handling the main program loop

\- Calling timetable operations



The program starts from:



&#x20;   int main()



\---



\## Course.h



Defines the course data structure.



A course contains information such as:



\- Course name

\- Lecturer

\- Room

\- Day

\- Time



\---



\## Timetable.h



Contains the declaration of the `Timetable` class.



The class is responsible for managing timetable-related operations such as:



\- Adding courses

\- Viewing courses

\- Detecting clashes

\- Exporting timetable data



\---



\## Timetable.cpp



Contains the implementation of the functions declared in `Timetable.h`.



Separating declarations from implementations keeps the project organized and makes the code easier to maintain.



\---



\## CMakeLists.txt



Contains the CMake configuration used to build the project.



It defines:



\- Project name

\- C++ standard

\- Source files

\- Executable target

\- Build configuration



\---



\## .gitignore



Specifies files and directories that should not be tracked by Git.



This helps prevent generated build files and other unnecessary files from being uploaded to GitHub.



\---



\# Program Design



The project follows a simple Object-Oriented Programming structure.



The main components are:



&#x20;   Application

&#x20;       |

&#x20;       v

&#x20;   main.cpp

&#x20;       |

&#x20;       v

&#x20;   Timetable

&#x20;       |

&#x20;       v

&#x20;   Course



`main.cpp` handles user interaction.



`Timetable` manages timetable operations.



`Course` represents individual course information.



This separation of responsibilities provides a foundation for future improvements.



\---



\# Data Model



A timetable entry can be represented conceptually as:



&#x20;   Course

&#x20;   │

&#x20;   ├── Course Name

&#x20;   ├── Lecturer

&#x20;   ├── Room

&#x20;   ├── Day

&#x20;   └── Time



Multiple course entries can be stored by the timetable system.



The application can compare these entries when checking for conflicts.



\---



\# Build Requirements



To build the project, you need:



\- Windows

\- MSYS2

\- MSYS2 UCRT64

\- GCC

\- CMake

\- Git



The project was developed and tested using MSYS2 UCRT64 and GCC.



\---



\# Installation



\## 1. Clone the Repository



Open an MSYS2 UCRT64 terminal and run:



&#x20;   git clone https://github.com/mohanmedulla-arch/timetable-builder.git



\## 2. Enter the Project



&#x20;   cd timetable-builder



\## 3. Create the Build Directory



&#x20;   mkdir build



\## 4. Enter the Build Directory



&#x20;   cd build



\---



\# Building the Project



Configure the project:



&#x20;   cmake -G "MinGW Makefiles" ..



Build the application:



&#x20;   cmake --build .



A successful build should produce output similar to:



&#x20;   \[ 33%] Building CXX object ...

&#x20;   \[ 66%] Building CXX object ...

&#x20;   \[100%] Linking CXX executable timetable.exe

&#x20;   \[100%] Built target timetable



The executable will be generated inside the `build` directory.



\---



\# Running the Application



From the `build` directory, run:



&#x20;   ./timetable.exe



The application should start and display the timetable menu.



\---



\# Example Usage



A typical session begins with:



&#x20;   ==============================

&#x20;         TIMETABLE BUILDER

&#x20;   ==============================

&#x20;   1. Add Course

&#x20;   2. View Courses

&#x20;   3. Delete Course

&#x20;   4. Edit Course

&#x20;   5. Export CSV

&#x20;   6. Exit

&#x20;   ==============================

&#x20;   Enter choice:



For example, when adding a course:



&#x20;   Course name: Engineering Mathematics

&#x20;   Lecturer: Dr. Ahmed

&#x20;   Room: Room 12

&#x20;   Day: Monday

&#x20;   Time: 08:00 - 10:00



The timetable system then checks the information against existing timetable entries.



If a conflict is detected, the application reports the problem instead of silently accepting the conflicting entry.



\---



\# Input Validation



The application includes basic input validation.



For example, if the application expects a menu number:



&#x20;   Enter choice: hello



the input should be rejected rather than being treated as a valid menu option.



Example response:



&#x20;   Invalid input. Please enter a number.



Input validation will continue to improve as more features are added.



Future validation may include:



\- Empty course names

\- Invalid rooms

\- Invalid days

\- Invalid time formats

\- Invalid indexes

\- Invalid file paths

\- Unexpected input



\---



\# CSV Export



The application supports exporting timetable information to CSV format.



CSV is useful because the resulting file can be opened using spreadsheet applications and processed by other software.



A typical CSV structure is:



&#x20;   Course,Lecturer,Room,Day,Time



CSV export provides a simple way to move timetable information outside the application.



Future versions may improve the export format and support additional formats.



\---



\# Error Handling



The current project focuses mainly on basic validation and safe handling of user input.



Future versions will improve error handling for situations such as:



\- Invalid course information

\- Empty input

\- Invalid file names

\- File creation failures

\- File writing failures

\- Invalid timetable data

\- Invalid indexes

\- Unexpected input



Exception handling will be introduced where it provides a useful improvement to the application.



\---



\# Development Workflow



The project follows an incremental development process:



&#x20;   Plan

&#x20;     ↓

&#x20;   Design

&#x20;     ↓

&#x20;   Implement

&#x20;     ↓

&#x20;   Build

&#x20;     ↓

&#x20;   Test

&#x20;     ↓

&#x20;   Debug

&#x20;     ↓

&#x20;   Commit

&#x20;     ↓

&#x20;   Push to GitHub



Each feature is developed, built, tested, and committed before moving to the next stage.



\---



\# Git and GitHub



Git is used for version control.



GitHub is used to host the project and track its development.



Repository:



https://github.com/mohanmedulla-arch/timetable-builder



Common commands include:



&#x20;   git status



Check the current repository state.



&#x20;   git add .



Stage changes.



&#x20;   git commit -m "Description of change"



Create a commit.



&#x20;   git push



Upload committed changes to GitHub.



The project uses meaningful commit messages to keep the development history understandable.



\---



\# Testing



Testing is currently performed manually.



Testing includes:



\- Building the application

\- Running the executable

\- Testing valid inputs

\- Testing invalid inputs

\- Testing course creation

\- Testing clash detection

\- Testing CSV export

\- Testing program behaviour after changes



Automated testing is planned for a future stage.



Future tests may cover:



\- Course creation

\- Course validation

\- Room clash detection

\- Lecturer clash detection

\- Timetable operations

\- CSV export

\- Error handling



\---



\# Current Limitations



The current version is intentionally simple.



Current limitations include:



\- Command-line interface only

\- No permanent database

\- Timetable data is primarily handled during the current program session

\- Timetable generation is not fully automatic

\- Clash detection is currently focused on room and lecturer conflicts

\- Automated unit testing is not yet implemented

\- No graphical user interface

\- Advanced scheduling constraints are not yet implemented



These limitations are part of the planned development process.



\---



\# Future Improvements



The project will gradually gain additional functionality.



\## Course Management



\- Edit courses

\- Delete courses

\- Search courses

\- Sort courses

\- Filter courses

\- Improve course validation



\## Data Persistence



\- Automatically save timetable data

\- Load previously saved timetables

\- Improve file storage

\- Add structured data storage

\- Add configuration files



\## Scheduling



\- Advanced clash detection

\- Time-overlap detection

\- Lecturer availability

\- Room availability

\- Room capacity

\- Course requirements

\- Student group scheduling

\- Automated timetable generation



\## User Experience



\- Improve the command-line interface

\- Improve timetable formatting

\- Improve error messages

\- Improve navigation

\- Improve timetable display



\## Software Engineering



\- Improve class design

\- Improve encapsulation

\- Improve separation of responsibilities

\- Add exception handling

\- Add unit testing

\- Add logging

\- Improve documentation

\- Add continuous integration



\## Long-Term Development



\- Constraint-based scheduling

\- Automated timetable generation

\- Graphical user interface

\- Advanced reporting

\- Multiple export formats

\- More sophisticated scheduling algorithms



\---



\# Roadmap



\## Stage 1 — Foundation



\- \[x] Create C++ project

\- \[x] Organize source and header files

\- \[x] Configure CMake

\- \[x] Build project successfully

\- \[x] Add course information

\- \[x] Detect basic timetable clashes

\- \[x] Export timetable data to CSV

\- \[x] Add menu input validation

\- \[x] Set up Git

\- \[x] Publish project on GitHub



\## Stage 2 — Course Management



\- \[ ] Edit courses

\- \[ ] Delete courses

\- \[ ] Search courses

\- \[ ] Sort courses

\- \[ ] Improve course validation



\## Stage 3 — Data Management



\- \[ ] Automatically save timetable data

\- \[ ] Load saved timetables

\- \[ ] Improve CSV handling

\- \[ ] Add configuration files



\## Stage 4 — Software Quality



\- \[ ] Improve architecture

\- \[ ] Improve error handling

\- \[ ] Add unit tests

\- \[ ] Add logging

\- \[ ] Improve documentation

\- \[ ] Improve code maintainability



\## Stage 5 — Advanced Scheduling



\- \[ ] Advanced clash detection

\- \[ ] Time-overlap detection

\- \[ ] Room constraints

\- \[ ] Lecturer availability

\- \[ ] Automated timetable generation



\## Stage 6 — Portfolio Release



\- \[ ] Add screenshots

\- \[ ] Add automated tests

\- \[ ] Review code quality

\- \[ ] Improve user experience

\- \[ ] Finalize documentation

\- \[ ] Create a stable release

\- \[ ] Prepare the project for portfolio presentation



\---



\# Learning Objectives



This project is being used to develop practical knowledge in C++ and software engineering.



\## C++ Programming



Topics practiced or planned include:



\- Variables and data types

\- Functions

\- Structures

\- Classes

\- Objects

\- Constructors

\- References

\- Pointers

\- Memory management

\- RAII

\- Encapsulation

\- Abstraction

\- Inheritance

\- Polymorphism

\- Templates

\- STL containers

\- STL algorithms

\- Exception handling

\- File handling



\## Software Engineering



The project provides practical experience with:



\- Code organization

\- Naming conventions

\- Separation of responsibilities

\- Object-oriented design

\- Clean code

\- Debugging

\- Testing

\- Documentation

\- Build systems

\- Version control

\- Project architecture

\- Maintainability



\## Development Tools



Experience is being developed with:



\- GCC

\- CMake

\- MSYS2

\- Git

\- GitHub

\- GitHub CLI



\---



\# Software Engineering Practices



The project aims to gradually adopt professional development practices.



These include:



\- Separation of concerns

\- Encapsulation

\- Abstraction

\- Single Responsibility Principle

\- Reusable functions

\- Clear naming

\- Minimal code duplication

\- Consistent formatting

\- Input validation

\- Error handling

\- Testable code

\- Maintainable architecture

\- Meaningful Git commits

\- Clear documentation



The goal is to apply these practices where they improve the project without introducing unnecessary complexity.



\---



\# Design Philosophy



The project is being developed incrementally.



The objective is not simply to add as many features as possible.



Each feature should improve at least one of the following:



\- Functionality

\- Reliability

\- Maintainability

\- Usability

\- Code quality

\- Architecture



The application will therefore evolve from a simple command-line program into a more structured timetable management and scheduling system.



\---



\# Versioning



The project currently uses development-style versioning.



Future releases may follow a format such as:



&#x20;   v0.1.0

&#x20;   v0.2.0

&#x20;   v0.3.0



A stable `1.0.0` release may be created once the core timetable-management functionality is complete, tested, and documented.



\---



\# Contributing



This is primarily a personal learning and portfolio project.



Constructive suggestions, bug reports, and improvement ideas are welcome.



When reporting a problem, please provide:



\- A clear description of the issue

\- Steps to reproduce the issue

\- Expected behaviour

\- Actual behaviour

\- Relevant error messages

\- Additional information that may help reproduce the problem



More formal contribution guidelines may be introduced if the project becomes a collaborative open-source project.



\---



\# License



This project is currently maintained as a personal learning and portfolio project.



No formal open-source license has been selected at this stage.



A formal license may be added in the future if the project is prepared for broader public reuse and contribution.



\---



\# Author



\## Mohamed Abdullahi



Electrical and Electronics Engineering Student



GitHub:



https://github.com/mohanmedulla-arch



\---



\# Project Status



\*\*Status: Active Development\*\*



The Department Timetable Builder is a functional C++ command-line application and is actively being improved.



Current development focuses on:



\- Improving reliability

\- Improving input validation

\- Improving code organization

\- Expanding course management

\- Improving data handling

\- Strengthening timetable clash detection

\- Applying professional C++ practices



The long-term goal is to transform the project from a basic command-line timetable application into a well-structured timetable management and scheduling system.



\---



\# Repository



GitHub Repository:



https://github.com/mohanmedulla-arch/timetable-builder



\---



\# Final Note



This project represents an ongoing learning journey in C++ and software engineering.



The application will continue to evolve as new programming concepts, algorithms, testing techniques, design principles, and software engineering practices are learned and applied.



The goal is not only to build a working timetable application, but also to develop the ability to design, build, debug, test, document, and maintain real-world software.

```



