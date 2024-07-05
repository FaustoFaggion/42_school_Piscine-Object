#ifndef HEADMASTER_HPP
#define HEADMASTER_HPP

#include "Staff.hpp"
#include "Form.hpp"
#include <vector>
#include <iostream>

using namespace std;

class Headmaster : public Staff
{
private:
	std::vector<Form*> _formToValidate;
	
public:
	Headmaster(std::string name) : Staff(name){};
	
	void finishedForm(){

		for(size_t i = 0 ; i < _formToValidate.size() ; i++){
			std::cout << "Headmaster Fianlizando o Form: " << _formToValidate[i] << std::endl;

			_formToValidate[i]->setExecuted(true);
			_formToValidate[i]->execute();
		}
	};

	void receiveForm(Form* p_form){
		std::cout << "Headmaster Recebendo e Aprovando Form: " << p_form << std::endl;
		p_form->setApproved(true);
		_formToValidate.push_back(p_form);
	}

};
#endif