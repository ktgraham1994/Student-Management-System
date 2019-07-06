#include <iostream>
#include <string>

#include "securityStudent.h"

using namespace std;

securityStudent::securityStudent()
{
    setdegree(SECURITY);
}
securityStudent::securityStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type): Student(studentID, firstName, lastName, email, age, daysInCourse, type)
{
    setdegree(SECURITY);
}
void securityStudent::setdegree(Degree type)
{
    this->type = SECURITY;
}
Degree securityStudent::getdegree()
{
    return SECURITY;
}
void securityStudent::print()
{
   Student::print(); cout << "SECURITY\n";
}
securityStudent::~securityStudent()
{
}