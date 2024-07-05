#ifndef NEEDMORECLASSROOM1_HPP
#define NEEDMORECLASSROOM1_HPP

#include <iostream>
#include "FormType.hpp"
#include "Form.hpp"

using namespace std;

class NeedMoreClassRoom1: public Form {
	public:
		NeedMoreClassRoom1(FormType f) : Form (f){};

	virtual void execute(){
		if (!this->isApproved()) {
			cout << "NeedMoreClassRoom1 execute()" << endl;
		}
		else
		{
			cout << "Form NeedMoreClassRoom1 não aprovado()" << endl;
		}
	};
};

#endif