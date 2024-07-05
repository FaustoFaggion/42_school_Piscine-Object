#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "Staff.hpp"
#include "Course.hpp"

class Course;

class Professor : public Staff
{
private:
	Course* _currentCourse;

public:
	Professor(std::string p_name) : Staff(p_name) {};

	Course* getCurrentCourse(){
		return this->_currentCourse;
	}
	void assignCourse(Course* p_course);
	void doClass();
	void closeCourse();
};
#endif