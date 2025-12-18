#ifndef STUDENT_H 
	#define STUDENT_H

	
	#include <iostream> 
	#include <cstring>  
	#include <cstdlib>  
	using namespace std;

	class Student
	{
		private: 
			string name,surname;
			float grade;
		public:
			Student();
			~Student();
			
			void setName(string);
			void setGrade(float);
			void setSurname(string);
			string getName() const;
			string getSurname() const;
			float getGrade() const;
			
			void print();
	};
	
#endif
