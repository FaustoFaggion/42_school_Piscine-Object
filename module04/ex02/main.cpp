#include "Singleton.hpp"
#include <iostream>
#include <list>
#include "Person.hpp"
#include "Secretary.hpp"
#include "Headmaster.hpp"

int main(){
    Secretary* secretaria = new Secretary("Dona Maria");
    Form* form1 = secretaria->createForm(CourseFinished);
    Form* form2 = secretaria->createForm(NeedMoreClassRoom);
	Form* form3 = secretaria->createForm(NeedCourseCreation);
	Form* form4 = secretaria->createForm(SubscriptionToCourse);

    form1->execute();

    secretaria->fillForm(form1, "Msg do formulário 1");
    secretaria->fillForm(form2, "Msg do formulário 2");
    secretaria->fillForm(form3, "Msg do formulário 3");
    secretaria->fillForm(form4, "Msg do formulário 4");

    Headmaster hm1 = Headmaster("Boss1");
    hm1.receiveForm(form1);
    hm1.receiveForm(form3);
    hm1.receiveForm(form2);
    hm1.receiveForm(form4);

    hm1.finishedForm();

    return 0;
};