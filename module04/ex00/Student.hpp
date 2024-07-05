#ifndef STUDENT_HPP
#define STUDENT_HPP
#include "Person.hpp"
#include "Course.hpp"
#include "Classroom.hpp"
#include <vector>

class Student : public Person
{
private:
	std::vector<Course*> _subscribedCourse;

public:
	Student(std::string p_name) : Person(p_name) {};

	void attendClass(Classroom* p_classroom);
	void exitClass();
	void graduate(Course* p_course);
};
#endif