#pragma once

#include <string>
class Student
{
private:
	std::string _name;
public:
	Student();
	//This is a default constructer since the student array from the 
	// course class requires all the students which there all none
	
	Student(std::string name);
	~Student();

	std::string GetName();
};

