#include "Course.h"
#include "Student.h"
#include <iostream>

Course::Course(std::string courseName, int capacity) {
    name = courseName;
    this->capacity = capacity;
    studentCount = 0;
    students = new Student*[capacity] {};  // Initialize the students array with nullptrs
}

Course::~Course() {
    for (int a = 0; a < studentCount; a++) {
        delete students[a];   
    }
    delete[] students;         // Deallocate the students array
}

void Course::printClassList() {
    std::cout << name << std::endl;       // will Print the course name
    for (int a = 0; a < studentCount; a++) {
        std::cout << students[a]->getName() << std::endl;  // Print the name of each enrolled student
    }
}

bool Course::addStudent(Student* newStudent) {
    if (studentCount < capacity) {
        students[studentCount++] = newStudent;   //will Add on the new student to the students array
        return true;                            // Return true means successful addition
    }
    return false;                               // Return false if the course is full
}

Student* Course::passStudent(std::string studentName) {
    for (int a = 0; a < studentCount; a++) {
        if (students[a]->getName() == studentName) {
            students[a]->increaseSemestersStudied();    // Increase the semesters studied for the passed student
            Student* removedStudent = students[a];      // Store the pointer to the removed student
            students[a] = students[--studentCount];     // Replace the removed student with next student in the array
            students[studentCount] = nullptr;           // Set the last element to nullptr
            return removedStudent;                      // Return the pointer to the removed student
        }
    }
    return nullptr;                                    // Return nullptr if the student is not found
}
