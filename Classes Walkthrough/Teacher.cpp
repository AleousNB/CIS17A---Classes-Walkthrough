#include "Teacher.h"

using namespace std;
/*
Teacher::Teacher(string name, int id) : _name(name), _id(id)
{
}

This is an example of a different way of creating a constructer.
This is how to set multiple variables for Teacher.
*/
Teacher::Teacher(string name) : _name(name)
{
}

Teacher::~Teacher()
{
}

//GetName can access _name despite being prvate because it is in the same class
std::string Teacher::GetName()
{
	return _name;
}