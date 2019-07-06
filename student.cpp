#include <iostream>
#include <iomanip>
#include <string>

#include "student.h"

using namespace std;

Student::Student()
{
    this->studentID = "";
    this->firstName = "";
    this->lastName = "";
    this->email = "";
    this->age = 0;
    this->daysInCourse[0] = 0;
    this->daysInCourse[1] = 0;
    this->daysInCourse[2] = 0;
}

Student::Student(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type)
{
    this->studentID = studentID;
    this->firstName = firstName;
    this->lastName = lastName;
    this->email = email;
    this->age = age;
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
}
void Student::setstudentID(string studentID)
{
    this->studentID = studentID;
}
void Student::setfirstName(string FirstName)
{
    firstName = FirstName;
}
void Student::setlastName(string LastName)
{
    lastName = LastName;
}
void Student::setemail(string Email)
{
    email = Email;
}
void Student::setage(int Age)
{
    age = Age;
}
void Student::setdaysInCourse(int daysInCourse[])
{
    this->daysInCourse[0] = daysInCourse[0];
    this->daysInCourse[1] = daysInCourse[1];
    this->daysInCourse[2] = daysInCourse[2];
}
string Student::getstudentID()
{
    return studentID;
}
string Student::getfirstName()
{
    return firstName;
}
string Student::getlastName()
{
    return lastName;
}
string Student::getemail()
{
    return email;
}
int Student::getage()
{
    return age;
}
int *Student::getdaysInCourse()
{
    return daysInCourse;
}
void Student::print()
{
    cout << studentID << "\t" << firstName << "\t" << lastName << "\t" << email << "\t" << age << "\t" << daysInCourse[0] << "," << daysInCourse[1] << "," << daysInCourse[2] << "\t" << endl;
}
Student::~Student()
{ 
}