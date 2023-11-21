#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>;

using namespace std;

namespace HR {

    struct Employee {

        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;

        void display()
        {
            cout << "\n--------------------------------------\n";
            cout << "Employee: " << firstInitial << ":" << lastInitial << endl;
            cout << "Number: " << employeeNumber << endl;
            cout << "Salary: " << salary << endl;
            cout << endl;
        }
    };

}

#endif