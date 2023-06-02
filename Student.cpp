#include "Student.h"

Student::Student() {
    name = "UNDEFINED";
    semestersStudied = 0;
    major = "Undeclared";
}

Student::Student(std::string studentName) {
    name = studentName;
    semestersStudied = 0;
    major = "Undeclared";
}

std::string Student::getName() {
    return name;
}

int Student::getSemestersStudied() {
    return semestersStudied;
}

std::string Student::getMajor() {
    return major;
}

void Student::increaseSemestersStudied() {
    semestersStudied++;
}

void Student::setMajor(std::string newMajor) {
    major = newMajor;
}
