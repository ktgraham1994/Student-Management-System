#include <iostream>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class networkStudent : public Student
{
public:
    networkStudent();
    networkStudent(string studentID, string firstName, string lastName, string email, int age, int daysInCourse[], Degree type);
    void print();
    Degree getdegree();
    void setdegree(Degree type);
    ~networkStudent();
private:
    Degree type;
};