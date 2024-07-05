#ifndef TempWorker_hpp
#define TempWorker_hpp

#include <stdio.h>
#include <iostream>
#include "Employee.hpp"

class TempWorker : public Employee
{
private:
    int logTempWorkHour;
    int mobilise;
    int executeWorkday();
    int calculateMoney();

public:
    TempWorker(int newHourlyValue);
    virtual ~TempWorker();
    void logMobilise(int newMobilise);
    void logWorkHours(int hoursWorked);
};

TempWorker::TempWorker(int newHourlyValue) : Employee(newHourlyValue), logTempWorkHour(0), mobilise(0){};

TempWorker::~TempWorker(){};

void TempWorker::logMobilise(int logMobilise)
{
    mobilise = logMobilise;
}

int TempWorker::executeWorkday()
{
    if (logTempWorkHour < 7)
        hoursWorked += logTempWorkHour;
    else
        hoursWorked += 7;
    logTempWorkHour = 0;
    return hoursWorked;
}

void TempWorker::logWorkHours(int hoursWorked)
{
    logTempWorkHour += hoursWorked;
}

int TempWorker::calculateMoney()
{
    int hoursMobilise = mobilise * 7;
    if (hoursMobilise < hoursWorked)
        return ((hoursMobilise * hourlyValue));
     else
        return ((hoursWorked * hourlyValue));
    
}

#endif