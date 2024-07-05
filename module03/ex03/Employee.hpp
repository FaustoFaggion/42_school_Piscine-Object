#ifndef Employee_HPP
#define Employee_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include "EmployeeManagement.hpp"

class Employee
{
protected:
    int         hourlyValue;
    int         hoursWorked;
    virtual int executeWorkday();
    virtual int calculateMoney();

public:
    Employee(int hourlyValue);
    virtual ~Employee();

    friend class EmployeeManager;
};


Employee::Employee(int newHourlyValue) : hourlyValue(newHourlyValue), hoursWorked(0)
{
}

Employee::~Employee()
{
}

int Employee::executeWorkday()
{
    return 7;
}

int Employee::calculateMoney()
{
    return (hoursWorked * hourlyValue);
}

#endif