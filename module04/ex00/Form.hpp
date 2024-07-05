#ifndef FORM_HPP
#define FORM_HPP

#include "Constants.hpp"

class Form
{
private:
	FormType _formType;

public:
	Form(FormType p_formType)
	{

	}

	virtual void execute() = 0;
};
#endif