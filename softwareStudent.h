#include <iostream>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class softwareStudent : public Student
{
  public:
    softwareStudent();
    softwareStudent(string firstName, string lastName, string studentID, string email, int age, int daysInCourse[], Degree type);
    void print();
    Degree getdegree();
    void setdegree(Degree type);
    ~softwareStudent();
  private:
    Degree type;      
};