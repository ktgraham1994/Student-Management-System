#include <iostream>
#include <string>

#include "softwareStudent.h"

using namespace std;

softwareStudent::softwareStudent()
{
    setdegree(SOFTWARE);
}
softwareStudent::softwareStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type): Student(studentID, firstName, lastName, email, age, daysInCourse, type)
{
    setdegree(SOFTWARE);
}
void softwareStudent::setdegree(Degree type)
{
    this->type = SOFTWARE;
}
Degree softwareStudent::getdegree()
{
    return SOFTWARE;
}
void softwareStudent::print()
{
   Student::print(); cout << "SOFTWARE\n";
}
softwareStudent::~softwareStudent()
{
}