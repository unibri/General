#include <iostream>
#include <string>
using namespace std;

Student::Student(string ln, string fn, int c, double grade, string db, string dm):
   lastName(ln), firstName(fn), credits(c), gpa(grade), dateBirth(db), dateMatriculation(dm){
	while(credits < 0){
	   cout << "Invalid number of credits. Input again: " << endl;
	   cin >> credits;
	}
   standing = creditToStanding(c);   
}

Student::Student():
   lastName("Blank"), firstName("Blank"), credits(0), standing("Blank"), gpa(0.0), dateBirth("mm/dd/yyyy"), dateMatriculation("mm/yyyy"){}

void Student::input(){
	cout << "Last name: "; cin >> lastName;
	cout << "First name: "; cin >> firstName;
	cout << "Number of credits: "; cin >> credits;
	cout << "GPA: "; cin >> gpa;
	cout << "Date of Birth: "; cin >> dateBirth;
	cout << "Date of Matriculation: "; cin >> dateMatriculation;
	standing = creditToStanding(credits);
}

void Student::output(){
	cout << lastName << ", " << firstName << endl;
	cout << "GPA: " << gpa << endl;
	cout << "Number of credits: " << credits << " Class standing: " << standing << endl;
	cout << "Date of birth: " << dateBirth << endl;
	cout << "Date of matriculation: " << dateMatriculation << endl;
}

string Student::getLast(){
	return lastName;
}

void Student::setLast(){
	cout << "Set last name for " << lastName << ", " << firstName << ": ";
	cin >> lastName;
}

string Student::getFirst(){
	return firstName;
}

void Student::setFirst(){
	cout << "Set first name for " << lastName << ", " << firstName << ": ";
	cin >> firstName;
}

int Student::getCredits(){
	return credits;
}

void Student::setCredits(){
	cout << "Set credits for " << lastName << ", " << firstName << ": ";
	cin >> credits;
	standing = creditToStanding(credits);
}

double Student::getGPA(){
	return gpa;
}

void Student::setGPA(){
	cout << "Set GPA for " << lastName << ", " << firstName << ": ";
	cin >> gpa;
}

string Student::getBirthday(){
	return dateBirth;
}

void Student::setBirthday(){
	cout << "Set date of birth for " << lastName << ", " << firstName <<": ";
	cin >> dateBirth;
}

string Student::getMatric(){
	return dateMatriculation;
}

void Student::setMatric(){
	cout << "Set date of matriculation for " << lastName << ", " << firstName << ": ";
	cin >> dateMatriculation;
}

string Student::creditToStanding(int c){
   string Standing;
   int crMult = c / 15;
   if (crMult == 0 || crMult == 1) Standing = " Freshman";
   else if (crMult == 2 || crMult == 3) Standing = " Sophomore";
   else if (crMult == 4 || crMult == 5) Standing = " Junior";
   else if (crMult >= 5) Standing = " Senior";

   if (crMult % 2 == 0) Standing = "Lower" + Standing;
   else if (crMult % 2 == 1) Standing = "Upper" + Standing;

   if (c >= 105) Standing = "Upper Senior";
   return Standing;
}
