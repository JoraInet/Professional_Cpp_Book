#include <iostream>;
#include <vector>;
#include "Employee.h";


using namespace std;
using namespace HR;

int main()
{
	vector<Employee> employees;
	employees.push_back(CreateNewEmployee('A', 'B', 1));
	employees.push_back(CreateNewEmployee('C', 'D', 2, 20000, EmployeeTitle::SeniorEngineer));
	employees.push_back(CreateNewEmployee('E', 'F', 3, 30000, EmployeeTitle::Manager));

	for (size_t i = 0; i < employees.size(); i++)
	{
		employees[i].display();
	}
}