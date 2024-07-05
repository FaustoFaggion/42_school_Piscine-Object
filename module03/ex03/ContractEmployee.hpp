#ifndef ContractEmployee_hpp
#define ContractEmployee_hpp

#include <stdio.h>
#include <iostream>
#include "Employee.hpp"

class ContractEmployee : public Employee
{
private:
    int logNoTempWorkHour;
    int vacation;
    int executeWorkday();
    int calculateMoney();

public:
    ContractEmployee(int newHourlyValue);
    virtual ~ContractEmployee();
    void setVacation(int newvacation);    
    void logNoWorkHours(int noHoursWorked);
};

ContractEmployee::ContractEmployee(int newHourlyValue) : Employee(newHourlyValue), logNoTempWorkHour(0){};

ContractEmployee::~ContractEmployee(){};

void ContractEmployee::setVacation(int newVacation)
{
    vacation = newVacation;
}

int ContractEmployee::executeWorkday()
{
    if (logNoTempWorkHour < 7)
    {
        int hours = 7 - logNoTempWorkHour;
        hoursWorked += hours;
        return hours;
    }
    else
        return 0;
}

void ContractEmployee::logNoWorkHours(int noHoursWorked)
{
    logNoTempWorkHour += noHoursWorked;
}

int ContractEmployee::calculateMoney()
{
    int hoursVacation = vacation * 7;
    if (hoursVacation < hoursWorked){
        int hours = hoursWorked - hoursVacation;
        return ((hours * hourlyValue));
    }
    else
        return 0;
    
}

#endif