#include <iostream>
#include "Student.h"

Student create(Student s1,Student s2)
{
	Student s3;
	s3.setName(s1.getName());
	s3.setSurname(s2.getSurname());
	float avg = (s1.getGrade()+s2.getGrade())/2;
	s3.setGrade(avg);
	return s3;
}


int main() {
	
	Student s1,s2;
	
	s1.setName("InsertYourNameHere");
	s1.setSurname("InsertYourSurnameHere");
	s1.setGrade(5); //Set your grade here
	
	s2.setName("InsertYourNameHere");
	s2.setSurname("InsertYourSurnameHere");
	s2.setGrade(9); //Set your grade here
	
	cout<< "Student 1: "<<"\n";
	s1.print();
	cout<<"\n";
	cout<<"Student 2: "<<"\n";
	s2.print();
	cout<<"\n";
	
	//Student 3 is the Average of the 2 with the name and the surname of both
	Student s3 = create(s1,s2);
	cout<<"Student 3: "<<"\n";
	s3.print();
	cout<<"\n";
	
	
	
	return 0;
}
