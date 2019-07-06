#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>

#include "degree.h"
#include "student.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "roster.h"

using namespace std;

roster::roster()
{
}

void roster::add(string studentID, string firstName, string lastName, string email, int age, int Days0, int Days1, int Days2, Degree type)
{
    int daysInCourse[3] = { Days0, Days1, Days2 };
    
    if(type == NETWORKING)
    {
       classRosterArray[addIndex++] = new networkStudent(studentID, firstName, lastName, email, age, daysInCourse, type);
    }
    if(type == SECURITY)
    {
       classRosterArray[addIndex++] = new securityStudent(studentID, firstName, lastName, email, age, daysInCourse, type);
    }
    if(type == SOFTWARE)
    {
       classRosterArray[addIndex++] = new softwareStudent(studentID, firstName, lastName, email, age, daysInCourse, type);
    }
}

void roster::remove(string studentID)
{
    bool remove = false;
    for(int x = 0; x < 5; x++)
    {
        if(classRosterArray[x] != nullptr)
        {
            if(studentID == classRosterArray[x]->getstudentID())
            {
                classRosterArray[x] = nullptr;
                remove = true;
                return;
            }
        }
    }
    cout << "Student with ID " << studentID << " can't be found\n";
}

void roster::printAll()
{
    cout << "Roster:\n";
    for(int x = 0; x < 5; x++)
    {
        this->classRosterArray[x]->print();
    }
    cout << endl;
}

void roster::printByDegreeProgram(int degree) 
{
   for (int i= 0; i < addIndex; i++) 
   {
     if (this->classRosterArray[i]->getdegree() == degree) this->classRosterArray[i]->print();
   }
   cout << endl;
}

void roster::printdaysInCourse(string studentID)
{
    bool found = false;
    for (int i = 0; i < addIndex; i++) 
    {
        if (this->classRosterArray[i]->getstudentID() == studentID) 
        {
            found = true;
            int* days = classRosterArray[i]->getdaysInCourse();
            cout << "Average number of days per course for student id: " << studentID << " is " << (days[0] + days[1] + days[2]) / 3 << endl;
        }
    }
    cout << endl;
}

void roster::printinvalidEmails()
{
cout << "The following email addresses were found to be invalid: " << endl;
for (int i = 0; i < 5; ++i) {
bool foundAt = false;
bool foundPeriod = false;
bool foundSpace = false;
string emailAddress = "";
emailAddress = (classRosterArray[i])->getemail();
for (char& x : emailAddress) {
if (x == '@') {
foundAt = true;
}
if (x == '.') {
foundPeriod = true;
}
if (x == ' ') {
foundSpace = true;
}
}
if (foundAt == false || foundPeriod == false || foundSpace == true) {
cout << (classRosterArray[i])->getemail() << endl;
}
}
cout << endl;
}

roster::~roster()
{
   for(int x = 0; x < 5; x++)
    {
        if(classRosterArray[x] != nullptr)
        {
        classRosterArray[x] = nullptr;
        }
    }
}

int main()
{
    cout << "Scripting and Programming - Applications\n";
    cout << "C++\n";
    cout << "000946466\n";
    cout << "Kerry Graham\n";
  const string studentData[] = 
  { 
  "A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
  "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORKING",
  "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
  "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
  "A5,Kerry,Graham,kgrah95@wgu.edu,25,28,46,32,SOFTWARE" 
  };
  
  roster *classRoster = new roster();
  
  Degree myDegree;
  
  for(int x = 0; x < 5; x++)
  {
      stringstream ss(studentData[x]);
      vector <string> result;
      
      while(ss.good())
      {
          string substr;
          getline(ss, substr, ',');
          result.push_back(substr);
      }
      if(result[8] == "SECURITY")
      {
          myDegree = SECURITY;
      }
      if(result[8] == "NETWORKING")
      {
          myDegree = NETWORKING;
      }
      if(result[8] == "SOFTWARE")
      {
          myDegree = SOFTWARE;
      }
      classRoster->add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]), stoi(result[6]), stoi(result[7]), myDegree);
  }
  classRoster->printAll();
  classRoster->printinvalidEmails();
  for (int i = 0; i < 5; i++) 
  {
      classRoster->printdaysInCourse(classRoster->classRosterArray[i]->getstudentID());
  }
  classRoster->printByDegreeProgram(SOFTWARE);
  classRoster->remove("A3");
  classRoster->remove("A3");
  return 0;
}