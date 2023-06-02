#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
private:
    std::string name;
    int semestersStudied;
    std::string major;

public:
    Student();
    Student(std::string studentName);

    std::string getName();
    int getSemestersStudied();
    std::string getMajor();

    void increaseSemestersStudied();
    void setMajor(std::string newMajor);
};

#endif 
