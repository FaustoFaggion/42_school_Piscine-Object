#include "Bank.hpp"

Bank::Bank() { 
next_account_id = 1;
liquidity = 0;
}

Bank::~Bank() {
    for (std::map<int, Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        delete it->second;
    }
    this->clientAccounts.clear();
}

const Account&    Bank::getAccount(int id) const {
    
    // // try {
    // //     Account *newAccount = this->clientAccounts.at(id);
    // //     std::cout << "new account::: "<< *newAccount << "\n";
    // // } catch(std::exception& e) {

    // }

    for (std::map<int, Account *>::const_iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        if ( (*it).first == id)
        {
            return *(it->second);
        }
    }
    throw FindAccount();
}
void    Bank::create_account(int value) {

     if (value < 0)
    {
        throw InvalidValue();
    } 
    Account *newAccount = new Account();
    newAccount->id = this->next_account_id;
    this->liquidity += value * 0.05;
    newAccount->value = value * 0.95;
    clientAccounts[this->next_account_id] = newAccount;
    this->next_account_id++;
}

void    Bank::delete_account(int id) {

    for (std::map<int, Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        if ( (*it).first == id)
        {
            delete (*it).second;
            this->clientAccounts.erase(it);
            return;
        }
    }
    throw FindAccount();
}

void Bank::loan(int id, int value)
{
    if (value <= 0) {
       throw InvalidValue();
    }
    if (this->liquidity < value) {
        throw FoundNotEnough();
    }
    for (std::map<int, Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        if ( (*it).first == id)
        {
            (*it).second->value += value;
            this->liquidity -= value;
            return;
        }
    }
    throw FindAccount();
}

void Bank::deposit(int id, int value)
{
    if (value <= 0) {
        throw InvalidValue();
    }
    for (std::map<int, Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        if ( (*it).first == id)
        {
            this->liquidity += value * 0.05;
            (*it).second->value += value * 0.95;
            return;
        }
    }
    throw FindAccount();
}

void Bank::withdraw(int id, int value)
{
    if (value <= 0) {
        throw InvalidValue();
    }
    for (std::map<int, Account *>::iterator it = this->clientAccounts.begin(); it != this->clientAccounts.end(); it++) {
        if ( (*it).first == id)
        {
            if (value > (*it).second->value) {
                throw FoundNotEnough();
            }
            (*it).second->value -= value;
            return;
        }
    }
    throw FindAccount();
}

std::ostream& operator << (std::ostream& lhs, Bank& rhs)
{
    lhs << "Bank informations : " << std::endl;
    lhs << "Liquidity : " << rhs.liquidity << std::endl;
    for (std::map<int, Account *>::iterator it = rhs.clientAccounts.begin(); it != rhs.clientAccounts.end(); it++)
        lhs << "id" << (*it).first << " : " << *(*it).second << std::endl;
    return (lhs);
}

Account&   Bank::operator[](int id) {
    return *(this->clientAccounts.at(id));
}