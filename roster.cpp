#include <iostream>
#include <cstdlib>
#include <string>
#include "roster.h"
#include "student.h"

Roster::Roster() : courseName(""), courseCode(0), credits(0), instructor(""){
  Student::Student stu();
}

string Roster::getCourseName(){
   return courseName;
}
int Roster::getCourseCode(){
   return courseCode;
}
int Roster::getCredits(){
   return credits;
}
string Roster::getInstructor(){
   return instructor;
}

