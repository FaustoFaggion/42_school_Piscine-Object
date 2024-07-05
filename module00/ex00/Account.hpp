#ifndef ACCOUNT_HPP
#define ACCOUNT_HPP

#include<iostream>
#include<string>

class Account {
        
        private:
                int id;
                int value;

                Account();
        public:
                Account(Account const &rsc);
                ~Account();

                const int &getId() const;
                const int &getValue() const;

        friend class Bank;      

        friend std::ostream& operator << (std::ostream& p_os, const Account& p_account);

};


#endif