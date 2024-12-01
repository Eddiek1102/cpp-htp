#ifndef P1_H
#define P1_H

#include <iostream>

class Employee {
    private:
        // Employee's first name
        std::string firstName;
        // Employee's last name
        std::string lastName;
        // Employee's monthly salary
        int monthlySalary;

    public:
        // Default constructor for employee
        Employee();

        // Constructor for employee
        Employee(std::string firstName, std::string lastName, int monthlySalary);

        // Returns first name
        std::string getFirstName();

        // Returns last name
        std::string getLastName();

        // Returns monthly Salary
        int getMonthlySalary();

        // Sets first name
        void setFirstName(std::string firstName);

        // Sets last name
        void setLastName(std::string lastName);

        // Sets monthly salary
        void setMonthlySalary(int monthlySalary);
};

// Function to compare employees
void compareEmployeeSalaries(Employee e1, Employee e2);

#endif