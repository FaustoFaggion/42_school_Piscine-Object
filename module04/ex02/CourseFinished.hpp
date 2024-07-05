#ifndef COURSEFINISHED1_HPP
#define COURSEFINISHED1_HPP

#include <iostream>
#include "FormType.hpp"
#include "Form.hpp"

using namespace std;

class CourseFinished1: public Form {
	public:
		CourseFinished1(FormType f) : Form (f){};

	virtual void execute(){
        if (this->isApproved()){
            this->setExecuted(true);
		    cout << "CourseFinished to be executed" << endl;
        } 
        else
        {
            cout << "CourseFinished not aproved" << endl;
        }
	};
};
#endif