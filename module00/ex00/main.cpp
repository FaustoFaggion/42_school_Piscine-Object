#include "Account.hpp"
#include "Bank.hpp"
#include <iostream>

int main()
{
        Bank bank = Bank();
 
        bank.create_account(50);
        bank.create_account(100);
        bank.create_account(140);
        std::cout << bank << std::endl;
        
        

        try {
        Account a = bank.getAccount(1);
        std::cout << "Account a: " << a << std::endl;
        } catch (std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
                std::cout << "\nTest delete account 3!!!!\n"; 
                bank.delete_account(3);
                std::cout << bank << std::endl;
                std::cout << "\nTest delete account 2!!!!\n";
                bank.delete_account(2);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << "\nTest exception FindAccount!!!!\n"; 
        try {
                bank.delete_account(0);
                std::cout << bank << std::endl;
                std::cout << "\nTest delete account 2!!!!\n";
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
        try {
                std::cout << "\nTest create 2 new accounts 3!!!!\n";
                bank.create_account(300);
                bank.create_account(340);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
                std::cout << "\nTest Loan 10 to account 4 with founds!!!!\n"; 
                bank.loan(4, 10);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << "\nTest Loan negative value!!!!\n"; 
        try {
                bank.loan(1, -100);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << "\nTest Loan without funds!!!!\n"; 
        try {
                bank.loan(1, 100);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        std::cout << "\nTest deposit to account 5!!!!\n"; 
        try {
                bank.deposit(5, 300);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
        try {
                std::cout << "\nTest deposit negative value!!!!\n"; 
                bank.deposit(4, -300);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
                std::cout << "\nTest withdraw in account 5!!!!\n"; 
                bank.withdraw(5, 300);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
                std::cout << "\nTest withdraw negative value!!!!\n";
                bank.withdraw(4, -300);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }
        try {
                std::cout << "\nTest withdraw value to high!!!!\n";
                bank.withdraw(4, 900);
                std::cout << bank << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }

        try {
                std::cout << "\nTest OPERATOR[] !!!!\n";
                std::cout << bank[4] << std::endl;
        } catch(std::exception &e) {
                std::cout << "Exception caught: " << e.what() << std::endl;
        }
        
        return (0);
}
