#ifndef FORM_HPP
#define FORM_HPP

#include "FormType.hpp"

class Form
{
private:
	FormType _formType;
	bool executed;
	bool approved;
	std::string msgPreenchimentoForm;

public:
	Form(FormType p_formType) : executed(false), approved(false)
	{
		this->_formType = p_formType;
	};

	void setExecuted(bool b){
		this->executed = b;
	}
	void setApproved(bool a){
		this->approved = a;
	}

	bool isExecuted(){
		return this->executed;
	}
	bool isApproved(){
		return this->approved;
	}

	void setMsg(std::string inf){
		this->msgPreenchimentoForm = inf;
	}
	std::string getMsg(){
		return this->msgPreenchimentoForm;
	}

	virtual void execute() = 0;
};

#endif

/*

class NeedMoreClassRoom : public Form {
	public:
		NeedMoreClassRoom(FormType f) : Form (f){};
		void execute();

	void execute(){
		cout << "NeedMoreClassRoom execute()" << endl;
	};
};

class NeedCourseCreation : public Form {
	public:
		NeedCourseCreation(FormType f) : Form (f){};
		void execute();

	void execute(){
		cout << "NeedCourseCreation execute()" << endl;
	};
};

class SubscriptionToCourse : public Form {
	public:
		SubscriptionToCourse(FormType f) : Form (f){};
		void execute();

	void execute(){
		cout << "SubscriptionToCourse execute()" << endl;
	};
};


*/
