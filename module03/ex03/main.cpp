#include <iostream>
#include "EmployeeManagement.hpp"
#include "TempWorker.hpp"
#include "ContractEmployee.hpp"
#include "Apprentice.hpp"

int main()
{
    EmployeeManager employeeManager;

    TempWorker employee1(100);
    employee1.logWorkHours(8);
    employee1.logMobilise(1);

    TempWorker employee2(100);
    employee2.logWorkHours(8);
    employee2.logMobilise(0);

    ContractEmployee employee3(100);
    employee3.logNoWorkHours(2);
    employee3.setVacation(0);

    Apprentice employee4(100);
    employee4.logSchoolHours(5);

    employeeManager.addEmployee(&employee1);
    employeeManager.addEmployee(&employee2);
    employeeManager.addEmployee(&employee3);
    employeeManager.addEmployee(&employee4);

    employeeManager.executeWorkday();
    employeeManager.calculatePayroll();

    // for (size_t i = 0; i < 29; i++)
    // {
    //     employee1.logWorkHours(7);
    //     employee1.logMobilise(29);
    //     employee2.logWorkHours(7);
    //     employee2.logMobilise(2);
    //     employee3.logNoWorkHours(0);
    //     employee3.setVacation(0);
    //     employee4.logSchoolHours(1);

    //     employeeManager.executeWorkday();
    // }
    // employeeManager.calculatePayroll();

    return 0;
}
