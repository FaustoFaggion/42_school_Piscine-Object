#ifndef ThursdayDiscountCommand_hpp
#define ThursdayDiscountCommand_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include "Command.hpp"

class ThursdayDiscountCommand : public Command
{
private:
    double getDiscountCommand(double totalPrice);

public:
    ThursdayDiscountCommand(int newId, int newClientId, std::string newDate);
    ~ThursdayDiscountCommand();
};


ThursdayDiscountCommand::ThursdayDiscountCommand(int newId, int newClientId, std::string newDate) : Command(newId, newClientId, newDate)
{
    id = newId;
    clientId = newClientId;
    date = newDate;
};

ThursdayDiscountCommand::~ThursdayDiscountCommand(){

};

double ThursdayDiscountCommand::getDiscountCommand(double totalPrice)
{
    return (date == "Thursday") ? totalPrice * 0.1 : 0.0;
};


#endif
