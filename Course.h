#ifndef COURSE_H
#define COURSE_H

#include <string>
#include "Student.h"

class Course {
private:
    std::string name;          // Name of the course
    int capacity;              // Maximum capacity of the course
    int studentCount;          // Current number of students enrolled
    Student** students;        // Dynamically allocated array of Student pointers

public:
    Course(std::string courseName, int capacity);   // Constructor
    ~Course();                                     // Destructor

    void printClassList();                         // Print the course name and list of enrolled students
    bool addStudent(Student* newStudent);           // Add a new student to the course
    Student* passStudent(std::string studentName);  // Pass a student and remove them from the course
};

#endif
