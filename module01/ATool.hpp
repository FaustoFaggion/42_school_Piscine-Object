#ifndef ATOOL_HPP
#define ATOOL_HPP

#include <iostream>
#include <string>
// #include "Worker.hpp"

class Worker;

class ATool {

    protected:
        int         numberOfUses;
        Worker      *worker_user;

    public:
        ATool();
        virtual ~ATool();

        virtual std::string    use() = 0;

    friend class Worker;
};

ATool::ATool() {
    this->worker_user = NULL;
    numberOfUses = 0;
};

ATool::~ATool() {
};

bool operator==(ATool &lhs, ATool &rhs) {

    std::string lhs_tool = lhs.use();
    std::string rhs_tool = rhs.use();

	if (lhs_tool != rhs_tool)
		return (false);
	return (true);
}

#endif