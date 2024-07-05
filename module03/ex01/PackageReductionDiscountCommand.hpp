#ifndef PackageReductionDiscountCommand_hpp
#define PackageReductionDiscountCommand_hpp

#include <stdio.h>
#include <string.h>
#include <iostream>
#include "Command.hpp"

class PackageReductionDiscountCommand : public Command
{
private:
    double getDiscountCommand(double totalPrice);

public:
    PackageReductionDiscountCommand(int newId, int newClientId, std::string newDate);
    ~PackageReductionDiscountCommand();
};

PackageReductionDiscountCommand::PackageReductionDiscountCommand(int newId, int newClientId, std::string newDate) : Command(newId, newClientId, newDate)
{
    id = newId;
    clientId = newClientId;
    date = newDate;
};

PackageReductionDiscountCommand::~PackageReductionDiscountCommand(){

};

double PackageReductionDiscountCommand::getDiscountCommand(double totalPrice)
{

    int totalPrice = Command::getTotalPrice()
    
        
    return (totalPrice > 150) ? 10 : 0;
};

#endif
