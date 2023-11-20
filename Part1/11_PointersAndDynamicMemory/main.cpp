#include <iostream>;
#include "employee.h";

using namespace std;

void WorkingWithPointers()
{
	Employee* anEmployee = new Employee();
	anEmployee->firstInitial = 'J';
	anEmployee->lastInitial = 'D';
	cout << anEmployee->salary << endl;

	bool isValidSalary{ (anEmployee && anEmployee->salary > 0) };

	cout << "Is valid salary, befor delete: " << isValidSalary << endl;

	delete anEmployee;
	//isValidSalary = anEmployee && anEmployee->salary > 0;
	//cout << "Is valid salary, after delete: " << isValidSalary << endl;
	anEmployee = nullptr;
	isValidSalary = anEmployee && anEmployee->salary > 0;
	cout << "Is valid salary, after nullptr: " << isValidSalary << endl;

}

int main()
{
	WorkingWithPointers();
}