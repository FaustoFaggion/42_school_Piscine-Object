#ifndef EmployeeManagement_HPP
#define EmployeeManagement_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include "Employee.hpp"

class Employee;

class EmployeeManager
{
private:
    std::vector<Employee *> employees;

public:
    EmployeeManager();
    ~EmployeeManager();

    void addEmployee(Employee *employee);
    void removeEmployee(Employee *employee);
    void executeWorkday();
    void calculatePayroll();
};


EmployeeManager::EmployeeManager()
{
}

EmployeeManager::~EmployeeManager()
{
}

void EmployeeManager::addEmployee(Employee *employee)
{
    employees.push_back(employee);
}

void EmployeeManager::removeEmployee(Employee *employeeToDelete)
{
    employees.erase(std::find(employees.begin(), employees.end(), employeeToDelete), employees.end());
}

void EmployeeManager::executeWorkday()
{
    if (employees.size() > 0)
    {
        for(std::vector<Employee *>::iterator it = employees.begin(); it != employees.end(); it++)
            (*it)->executeWorkday();
    }
    else
        std::cout << "No employees to do workday";
}

void EmployeeManager::calculatePayroll()
{
    size_t size = employees.size();

    if (size > 0)
    {
        for (size_t i = 0; i < size; i++)
        {
            int salary = employees[i]->calculateMoney();
            std::cout << "Employee ID: " << i << " Salary: " << salary << std::endl;
        }
    }
}

#endif