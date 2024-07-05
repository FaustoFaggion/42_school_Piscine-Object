#pragma once

#ifndef WORKER_HPP
#define WORKER_HPP

#include <iostream>
#include <vector>
#include "ATool.hpp"
#include "Shovel.hpp"
#include "Hammer.hpp"
#include <map>

class Workshop;
class ATool;

struct Position {
    int         x;
    int         y;
    int         z;
};

struct Statistic {
    int         level;
    int         exp;
};

class Worker {

    private:
        
        std::string     name;
        Position        coordonnee;
        Statistic       stat;      
        
        std::vector<ATool *>                toolBox;
        std::map<std::string, Workshop *>   work_places;

    public:
        Worker(std::string name, int level, int exp);
        ~Worker();

        const std::string&     getName() const;

        void    addTool(ATool &tool);
        void    dropTool(ATool &tool); 
        void    work();

    friend std::ostream&    operator <<(std::ostream &lhs, Worker &rhs);
};

Worker::Worker(std::string name, int level, int exp) {
    this->name = name;

    this->coordonnee.x = 0;
	this->coordonnee.y = 0;
	this->coordonnee.z = 0;
	this->stat.level = level;
	this->stat.exp = exp;
};

Worker::~Worker() {
    for (std::vector<ATool *>::iterator it = toolBox.begin(); it != toolBox.end(); it++) {
        (*it)->worker_user = NULL;
    }
};

const std::string&     Worker::getName() const{
    return (this->name);
}

void    Worker::addTool(ATool &tool) {

    Shovel shovel = Shovel();
    Hammer hammer = Hammer();

    if (tool.worker_user != NULL) {
        tool.worker_user->dropTool(tool);
    }
    this->toolBox.push_back(&tool);
    tool.worker_user = this;
 
    if (shovel == tool)
        std::cout << "shovel taken by " << this->name << std::endl;
    else if (hammer == tool)
        std::cout << "hammer taken by " << this->name << std::endl;
};

void    Worker::dropTool(ATool &tool) {
    
    Shovel shovel = Shovel();
    Hammer hammer = Hammer();

    if (!toolBox.empty()) {
        for (std::vector<ATool *>::iterator it = this->toolBox.begin(); it != this->toolBox.end(); it++) {
            if (**it == tool) {
                 if (shovel == tool)
                    std::cout << this->name << " drop the shovel" << std::endl;
                else if (hammer == tool)
                    std::cout << this->name << " drop the hammer" << std::endl;
                toolBox.erase(it);
                return;
            }
        }
    }
};

void    Worker::work() {
    this->stat.exp++;
    this->stat.level = stat.exp / 3;
    if (!toolBox.empty()) {
        for(std::vector<ATool *>::iterator it = toolBox.begin(); it != toolBox.end(); it++) {
            std::cout << this->name << " working " << (*it)->use() << std::endl;
        }
    }
    else
        std::cout << this->name << " can not work without a tool." << std::endl;
};

std::ostream&    operator <<(std::ostream &lhs, Worker &rhs) {
    
    if (!rhs.toolBox.empty()) {
        for (std::vector<ATool *>::iterator it = rhs.toolBox.begin(); it != rhs.toolBox.end(); it++) {
            std::cout << *it << std::endl;
        }
    }
    else
        lhs << rhs.name << " toolbox empty!" << std::endl;


    return (lhs);
};

#endif