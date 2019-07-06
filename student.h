#pragma once

#include <iostream>
#include <string>

#include "degree.h"

using namespace std;

class Student
{
public:
    Student();
    Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type);
    
    const int arrSize = 3;
    
    string getstudentID();
    string getfirstName();
    string getlastName();
    string getemail();
    int getage();
    int* getdaysInCourse();
    virtual Degree getdegree() = 0;
    
    void setstudentID(string studentID);
    void setfirstName(string firstName);
    void setlastName(string lastName);
    void setemail(string email);
    void setage(int age);
    void setdaysInCourse(int daysInCourse[]);
    virtual void setdegree(Degree type) = 0;
    virtual void print();
    ~Student();
    private:
    string studentID, firstName, lastName, email;
    int age, daysInCourse[3];
};