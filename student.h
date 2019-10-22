#ifndef STUDENT_H
#define STUDENT_H
#include <string>
using namespace std;

class Student{

	private:
	   string lastName;
	   string firstName;
	   string standing;
	   int credits;
	   double gpa;
	   string dateBirth;
	   string dateMatriculation;
	public:
	   //constructors
	   Student(string ln, string fn, int c, double gpa, string db, string dm);
	   Student();
	   //input output
	   void input();
	   void output();
	   //returns class standing from amount of credits
	   string creditToStanding(int c);
	   //accesors
	   string getLast();
	   string getFirst();
	   string getStanding();
	   int getCredits();
	   double getGPA();
	   string getBirthday();
	   string getMatric();
	   //mutators
	   void setLast();
	   void setFirst();
	   void setCredits();
	   void setGPA();
	   void setBirthday();
	   void setMatric();

};
#endif
