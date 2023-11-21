#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>;
#include <map>;

using namespace std;

namespace HR {

    enum class EmployeeTitle
    {
        Manager,
        SeniorEngineer,
        Engineer
    };

    //map<EmployeeTitle, string> EmployeeTitle_Map = {
    //    {EmployeeTitle::Manager, "Manager"},
    //    {EmployeeTitle::SeniorEngineer, "Senior Engineer"},
    //    {EmployeeTitle::Engineer, "Engineer"}
    //};
    string EmployeeTitleAsString(EmployeeTitle title)
    {
        switch (title)
        {
        case HR::EmployeeTitle::Manager:
            return "Manager";
            break;
        case HR::EmployeeTitle::SeniorEngineer:
            return "Senior Engineer";
            break;
        case HR::EmployeeTitle::Engineer:
            return "Engineer";
            break;
        default:
            return "<Undefined>";
            break;
        }
    }

    struct Employee {

        char firstInitial;
        char lastInitial;
        int employeeNumber;
        int salary;
        EmployeeTitle title;

        void display()
        {
            cout << "\n--------------------------------------\n";
            cout << "Employee: " << firstInitial << ":" << lastInitial << endl;
            //cout << "Title: " << EmployeeTitle_Map[title] << endl;
            cout << "Title: " << EmployeeTitleAsString(title) << endl;
            cout << "Number: " << employeeNumber << endl;
            cout << "Salary: " << salary << endl;
            cout << endl;
        }
    };

}

#endif