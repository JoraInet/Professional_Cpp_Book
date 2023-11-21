#include <iostream>;
#include "Employee.h";

using namespace std;
using namespace HR;

int main()
{
	Employee anEmployee;
	anEmployee.firstInitial = 'J';
	anEmployee.lastInitial = 'D';
	anEmployee.employeeNumber = 42;
	anEmployee.salary = 80000;
	// Output the values of an employee.
	anEmployee.display();

	Employee anEmployee2{
		.firstInitial = 'A',
		.lastInitial = 'B',
		.employeeNumber = 1,
		.salary = 100000
	};
	anEmployee2.display();

}