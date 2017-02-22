#include <iostream>
#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	Teacher james = Teacher("james");
	cout << james.GetName() << endl;

	getchar();
	return 0;
}