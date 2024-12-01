#include "p1.h"
#include <iostream>

int main() {
    Employee e1 = Employee();
    Employee e2 = Employee("Rambling", "Wreck", 9500);
    std::string first, last, salary;
    
    std::cout << "Enter first name: ";
    std::getline(std::cin, first);
    std::cout << "Enter last name: ";
    std::getline(std::cin, last);
    std::cout << "Enter monthly salary: ";
    std::getline(std::cin, salary);

    e1.setFirstName(first);
    e1.setLastName(last);
    e1.setMonthlySalary(std::stoi(salary));
    compareEmployeeSalaries(e1, e2);

    return 0;
}


Employee::Employee() {
    this -> firstName = "N/A";
    this -> lastName = "N/A";
    this -> monthlySalary = 0;
}

Employee::Employee(std::string firstName, std::string lastName, int monthlySalary) {
    this -> firstName = firstName;
    this -> lastName = lastName;
    this -> monthlySalary = (monthlySalary > 0) ? monthlySalary : 0;
}

std::string Employee::getFirstName() {
    return firstName;
}

std::string Employee::getLastName() {
    return lastName;
}

int Employee::getMonthlySalary() {
    return monthlySalary;
}

void Employee::setFirstName(std::string firstName) {
    this -> firstName = firstName;
}

void Employee::setLastName(std::string lastName) {
    this -> lastName = lastName;
}

void Employee::setMonthlySalary(int monthlySalary) {
    this -> monthlySalary = monthlySalary;
}

void compareEmployeeSalaries(Employee e1, Employee e2) {
    if (e1.getMonthlySalary() > e2.getMonthlySalary()) {
        std::cout << e1.getFirstName() << " " << e2.getLastName() << " earns more.\n";
    }
    else if (e1.getMonthlySalary() < e2.getMonthlySalary()) {
        std::cout << e2.getFirstName() << " " << e2.getLastName() << " earns more.\n";
    }
    else {
        std::cout << "Both employees earn the same amount.\n";
    }
}