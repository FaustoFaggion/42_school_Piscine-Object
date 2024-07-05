
#ifndef WORKSHOP_HPP
#define WORKSHOP_HPP

#include <map>
#include <iostream>
#include "Worker.hpp"

class Worker;

class Workshop {

    private:
        std::string                         name;
        std::map<std::string, Worker *>     crew;

    public:
    Workshop(std::string name);
    ~Workshop();

    const std::string&     getName() const;

    void    registerWorker(Worker& worker);
    void    releaseWorker(Worker& worker);
    void    getCrew();
    void    executeWorkDay();

    friend std::ostream&   operator<<(std::ostream& lhs, Workshop& rhs);

    friend class Worker;
};

Workshop::Workshop(std::string name) {
    this->name = name;
};

Workshop::~Workshop() {

};

const std::string&     Workshop::getName() const {
    return (this->name);
};

void    Workshop::registerWorker(Worker& worker) {
    if (this->crew.find(worker.getName()) == crew.end()) {
        this->crew[worker.getName()] = &worker;
    }
    else
        std::cout << "Worker " << worker.getName() << " already registered!!" << std::endl;
};

void    Workshop::releaseWorker(Worker& worker) {
    if (this->crew.find(worker.getName()) != crew.end())
        this->crew.erase(worker.getName());
    else
        std::cout << "Worker " << worker.getName() << " not found!!" << std::endl;
};

void    Workshop::getCrew() {
    for (std::map<std::string, Worker *>::iterator it = crew.begin(); it != crew.end(); it++) {
        std::cout << *(it->second) << std::endl;
    }
}

void    Workshop::executeWorkDay() {
    for (std::map<std::string, Worker *>::iterator it = crew.begin(); it != crew.end(); it++) {
        (*it->second).work();
    }
}

std::ostream&   operator <<(std::ostream& lhs, Workshop& rhs) {
    lhs << "Workshop " << rhs.getName() << "\n-------------------------\n\n";
    for (std::map<std::string, Worker *>::iterator it = rhs.crew.begin(); it != rhs.crew.end(); it++) {
        lhs << *(it->second) << std::endl;
    }
    return (lhs);
}


#endif