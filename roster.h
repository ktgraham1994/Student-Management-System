#include <iostream>
#include <string>
#include <array>

#include "student.h"
#include "degree.h"

//using namespace std;

class roster
{
public:
    roster();
    void add(string studentID, string firstName, string lastName, string email, int age, int Days0, int Days1, int Days2, Degree type);
    void remove(string studentID);
    void printAll();
    void printByDegreeProgram(int degree);
    void printdaysInCourse(string studentID);
    void printinvalidEmails();
    int addIndex = 0;
    ~roster();
    Student *classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
};