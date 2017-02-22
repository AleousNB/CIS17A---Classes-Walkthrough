#pragma once
#include <string>
class Teacher
{
private:
	std::string _name;
public:
	Teacher(std::string _name);
	~Teacher();
	std::string GetName();
};

