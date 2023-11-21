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
	anEmployee.title = EmployeeTitle::SeniorEngineer;
	// Output the values of an employee.
	anEmployee.display();

}