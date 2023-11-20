#ifndef EMPLOYEE_H
#define EMPLOYEE_H

struct Employee {
    char firstInitial;
    char lastInitial;
    int  employeeNumber;
    int  salary{ 75'000 };
};

#endif // !EMPLOYEE_H