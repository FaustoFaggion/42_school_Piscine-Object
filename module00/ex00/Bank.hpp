#ifndef BANK_HPP
#define BANK_HPP

#include <iostream>
#include <string>
#include <map>
#include <iterator>
#include <algorithm>
#include "Account.hpp"
#include <exception>

class Bank {
    class FindAccount : public  std::exception {
        public:
            const char* what() const throw() {
            return "Account not found!!";
        }
    };

    class InvalidValue : public  std::exception {
        public:
            const char* what() const throw() {
            return "Invalid value!!";
        }
    };

    class FoundNotEnough : public  std::exception {
        public:
            const char* what() const throw() {
            return "Bank do not have founds to loan!!";
        }
    };

    private:           
        std::map<int, Account *>    clientAccounts;
        int                         liquidity;
        int                         next_account_id;;


    public:
        Bank();
        Bank(Bank const &rsc);
        ~Bank();

    const Account&    getAccount(int id) const;
    void    create_account(int inflow);
    void    delete_account(int id);
    void    loan(int id, int value);
    void    deposit(int id, int value);
    void    withdraw(int id, int value);

    friend std::ostream& operator << (std::ostream& lhs, Bank& rhs);
    Account& operator [](int id);
};


#endif