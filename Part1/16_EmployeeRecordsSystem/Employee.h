#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>;

namespace Records 
{
	const int DefaultStartingSalary{ 30'000 };
	const int DefaultRaiseAndDemeritAmount{ 1'000 };

	class Employee
	{
        public:
            Employee(const std::string& firstName, const std::string& lastName);

            void promote(int raiseAmount = DefaultRaiseAndDemeritAmount);
            void demote(int demeritAmount = DefaultRaiseAndDemeritAmount);
            void hire(); // Hires or rehires the employee
            void fire(); // Dismisses the employee
            void display() const;// Outputs employee info to console

            // Getters and setters
            void setFirstName(const std::string& firstName) { m_firstName = firstName; }
            const std::string& getFirstName() const { return m_firstName; }

            void setLastName(const std::string& lastName) { m_lastName = lastName; }
            const std::string& getLastName() const { return m_lastName; }

            void setEmployeeNumber(int employeeNumber) { m_employeeNumber = employeeNumber; }
            int getEmployeeNumber() const { return m_employeeNumber; }

            void setSalary(int newSalary) { m_salary = newSalary; }
            int getSalary() const { return m_salary; }

            bool isHired() const { return m_hired; }

        private:
            std::string m_firstName;
            std::string m_lastName;
            int m_employeeNumber{ -1 };
            int m_salary{ DefaultStartingSalary };
            bool m_hired{ false };

	};

}
#endif // !EMPLOYEE_H




