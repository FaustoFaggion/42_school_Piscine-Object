#ifndef SECRETARY_HPP
#define SECRETARY_HPP
#include "Form.hpp"
#include "Staff.hpp"
#include "FormType.hpp"
#include "CourseFinished.hpp"
#include "NeedMoreClassRoom.hpp"
#include "NeedCourseCreation.hpp"
#include "SubscriptionToCourse.hpp"

class Secretary : public Staff
{
private:
public:
	Secretary(std::string name) : Staff(name){};
	Form *createForm(FormType p_formType)
	{

		std::cout << "Secretaria criando form: " << p_formType << std::endl;

		if (p_formType == CourseFinished)
		{
			CourseFinished1 *form1 = new CourseFinished1(p_formType);
			return form1;
		}

		if (p_formType == NeedMoreClassRoom)
		{
			NeedMoreClassRoom1 *form1 = new NeedMoreClassRoom1(p_formType);
			return form1;
		}

		if (p_formType == NeedCourseCreation)
		{
			NeedCourseCreation1 *form1 = new NeedCourseCreation1(p_formType);
			return form1;
		}
		if (p_formType == SubscriptionToCourse)
		{
			SubscriptionToCourse1 *form1 = new SubscriptionToCourse1(p_formType);
			return form1;
		}
		return NULL;
	}
	void fillForm(Form *f, std::string info)
	{
				std::cout << "Secretaria preenchendo form: " << f << " - " << info << std::endl;
		f->setMsg(info);
	};
	void archiveForm();
};
#endif

/*
 NeedMoreClassRoom : public Form {
	public:
		void execute();

	void execute(){
		cout << "NeedMoreClassRoom execute()" << endl;
	};
};

class NeedCourseCreation : public Form {
	public:
		void execute();

	void execute(){
		cout << "NeedCourseCreation execute()" << endl;
	};
};

class SubscriptionToCourse : public Form {
	public:*/