#include <iostream>
#include <string>

#include "networkStudent.h"

using namespace std;

networkStudent::networkStudent()
{
    setdegree(NETWORKING);
}
networkStudent::networkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type): Student(studentID, firstName, lastName, email, age, daysInCourse, type)
{
    setdegree(NETWORKING);
}
void networkStudent::setdegree(Degree type)
{
    this->type = NETWORKING;
}
Degree networkStudent::getdegree()
{
    return NETWORKING;
}
void networkStudent::print()
{
   Student::print(); cout << "NETWORKING\n";
}
networkStudent::~networkStudent()
{
}