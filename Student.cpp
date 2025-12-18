#include "Student.h"


Student::Student()
{
	name = "";
	surname = "";
	grade = 0;
	cout << "Student Created\n";
}

Student::~Student()
{
	cout<< "Student with the name: "<< name << " "<< surname<<" has been destroyed\n";
}

void Student::setGrade(float grade)
{
	if(grade >= 0 and grade <= 10)
		this->grade = grade;
	else
		cout <<"Not Valid Grade\n";
}
 
float Student::getGrade() const
{
 	return grade;
}



void Student::setName(string name)
{
	this->name = name;
}

string Student::getName() const
{
	return name;
}
 
void Student::setSurname(string surname) 
{
	this->surname = surname;
}

string Student::getSurname() const
{
	return surname;
}


void Student::print() 
{
	cout<< "Name: " << name << "\n";
	cout<<"Surname: "<< surname <<"\n";
	cout<<"Grade: "<< grade << "\n";
}



