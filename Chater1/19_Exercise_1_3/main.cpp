#include <iostream>;
#include <array>;
#include "Employee.h";


using namespace std;
using namespace HR;

int main()
{
	array<Employee, 3> employees{
		CreateNewEmployee('A', 'B', 1),
		CreateNewEmployee('C', 'D', 2, 20000, EmployeeTitle::SeniorEngineer),
		CreateNewEmployee('E', 'F', 3, 30000, EmployeeTitle::Manager)
	};

	for (size_t i = 0; i < employees.size(); i++)
	{
		employees[i].display();
	}
}