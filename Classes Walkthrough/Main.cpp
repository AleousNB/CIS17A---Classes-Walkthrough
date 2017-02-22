#include <iostream>
#include "Student.h"
#include "Teacher.h"
#include "Course.h"

using namespace std;

int main()
{
	Teacher james = Teacher("james");
	Course cis17 = Course("CIS17A", ":Programming C++: Objects",james);
	Student bob = Student("bob");
	Student jame = Student("jame");

	cis17.EnrollStudent(bob, 0);
	cis17.EnrollStudent(jame, 1);

	getchar();
	return 0;
}