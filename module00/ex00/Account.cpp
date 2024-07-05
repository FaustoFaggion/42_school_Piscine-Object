#include "Account.hpp"

Account::Account() {

    this->id = -1;
    this->value = 0;
}

Account::Account(Account const &rsc) {
    this->id = rsc.id;
    this->value = rsc.value;
}

Account::~Account() {

}

const int &Account::getValue() const
{
    return value;
}

const int &Account::getId() const
{
    return id;
}

std::ostream& operator << (std::ostream& p_os, const Account& p_account)
{
    p_os << "id : [" << p_account.id << "] value: [" << p_account.value << "]";
    return (p_os);
}