#ifndef ROSTER_H
#define ROSTER_H

#include <string>
#include "student.h"

class Roster{

   private:
     string courseName;
     int courseCode;
     int credits;
     string instructor;
     Student stu;

   public:
     //accessors
     string getCourseName();
     int getCourseCode();
     int getCredits();
     string getInstructor();
     //mutators;
     void setCourseName();
     void setCourseCode();
     void setCredits();
     //constructors
     Roster();

};
static int MAX_CAPACITY = 10;
#endif
