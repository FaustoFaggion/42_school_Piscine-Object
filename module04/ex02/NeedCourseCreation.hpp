#ifndef NEEDCOURSECREATION1_HPP
#define NEEDCOURSECREATION1_HPP

#include <iostream>
#include "FormType.hpp"
#include "Form.hpp"

using namespace std;

class NeedCourseCreation1 : public Form {
	public:
		NeedCourseCreation1(FormType f) : Form (f){};

	virtual void execute(){
		if (!this->isApproved()) {
			cout << "NeedCourseCreation1 execute()" << endl;
		}
		else
		{
			cout << "Form NeedCourseCreation1 não aprovado()" << endl;
		}
	};
};
#endif