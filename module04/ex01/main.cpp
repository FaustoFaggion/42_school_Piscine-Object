#include "Singleton.hpp"
#include <iostream>
#include <list>
#include "Person.hpp"

int main(){
    Singleton<StudentList, Student> &studentList = StudentList::getInstance();
    Singleton<StudentList, Student> &studentList2 = StudentList::getInstance();
    Singleton<StaffList, Staff> &staffList = StaffList::getInstance();
    Singleton<CourseList, Course> &courseList = CourseList::getInstance();
    Singleton<RoomList, Room> &roomList = RoomList::getInstance();
    
    //Validando que existe apenas uma vez
    std::cout << "Validando se os singletons são iguais" << std::endl;
    if (&studentList == &studentList2)
    {
        std::cout << "Objetos studentList IGUAIS" << std::endl;
    }
    else
    {
        std::cout << "Objetos studentList DIFERENTES" << std::endl;
    }

    Student* student1 = new Student("Estudante 1");
    Student* student2 = new Student("Estudante 1");
    studentList.add_item(student1);
    studentList2.add_item(student2);
    list<Student *> studentGetObj = studentList.getObjects();
    studentList.remove_item(student2);
    
    Staff* staff1 = new Staff("Staff 1");
    staffList.add_item(staff1);
    list<Staff *> staffGetObj = staffList.getObjects();
    //staffGetObj->

    Course* course1 = new Course("Course 1");
    courseList.add_item(course1);
    list<Course *> courseGetObj = courseList.getObjects();

    Room* romm1 = new Room();
    roomList.add_item(romm1);
    list<Room *> roomGetObj = roomList.getObjects();

    return 0;
};