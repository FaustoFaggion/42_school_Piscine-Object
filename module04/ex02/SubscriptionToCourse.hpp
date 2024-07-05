#ifndef SUBSCRIPTIONTOCOURSE1_HPP
#define SUBSCRIPTIONTOCOURSE1_HPP

#include <iostream>
#include "FormType.hpp"
#include "Form.hpp"

using namespace std;

class SubscriptionToCourse1 : public Form {
	public:
		SubscriptionToCourse1(FormType f) : Form (f){};

	virtual void execute(){
		if (!this->isApproved()) {
			cout << "SubscriptionToCourse execute()" << endl;
		}
		else
		{
			cout << "Form SubscriptionToCourse não aprovado()" << endl;
		}
	};
};
#endif