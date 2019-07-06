#include <iostream>
#include <string>

#include "student.h"
#include "degree.h"

using namespace std;

class securityStudent : public Student
{
    public:
        securityStudent();
        securityStudent(string firstName, string lastName, string studentID, string email, int age, int daysInCourse[], Degree type);
        void print();
        Degree getdegree();
        void setdegree(Degree type);
        ~securityStudent();
    private:
        Degree type;        
};