#ifndef Apprentice_hpp
#define Apprentice_hpp

#include <stdio.h>
#include <iostream>
#include "Employee.hpp"

class Apprentice : public Employee
{
private:
    int schoolHours;
    int tmpSchoolHours;
    int executeWorkday();
    int calculateMoney();

public:
    Apprentice(int newHourlyValue);
    virtual ~Apprentice();
    void logSchoolHours(int logSchoolHours);
};

Apprentice::Apprentice(int newHourlyValue) : Employee(newHourlyValue), schoolHours(0), tmpSchoolHours(0){};

Apprentice::~Apprentice(){};

int Apprentice::executeWorkday()
{
    if (tmpSchoolHours < 7)
    {
        int hours = 7 - tmpSchoolHours;
        hoursWorked += hours;
        schoolHours = tmpSchoolHours;
        tmpSchoolHours = 0;
        return hours;
    }
    else
    {
        schoolHours = 7;
        tmpSchoolHours = 0;
    }

    return 0;
}

void Apprentice::logSchoolHours(int logSchoolHours)
{
    tmpSchoolHours += logSchoolHours;
}

int Apprentice::calculateMoney()
{
    return ((hoursWorked * hourlyValue) + (schoolHours * (hourlyValue / 2)));
}

#endif