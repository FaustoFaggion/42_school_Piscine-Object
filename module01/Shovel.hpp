#ifndef SHOVEL_HPP
#define SHOVEL_HPP

#include "ATool.hpp"

class Shovel: public ATool {

    private:
    
    public:
        Shovel();
        ~Shovel();
        
        std::string     use();

        friend  bool     operator==(Shovel const &lhs, Shovel const &rhs);

        friend  std::ostream&   operator<<(std::ostream &lhs, Shovel &rhs); 
};

bool operator==(Shovel &lhs, Shovel &rhs) {

    std::string lhs_tool = lhs.use();
    std::string rhs_tool = rhs.use();

	if (lhs_tool != rhs_tool)
		return (false);
	return (true);
}

bool operator==(Shovel &lhs, ATool &rhs) {

    std::string lhs_tool = lhs.use();
    std::string rhs_tool = rhs.use();

	if (lhs_tool != rhs_tool)
		return (false);
	return (true);
}

std::ostream&   operator<<(std::ostream &lhs, Shovel &rhs) {
    lhs << "number of uses: " << rhs.numberOfUses << std::endl;
    if (rhs.worker_user == NULL)
        lhs << "Nobody is using me!" << std::endl;
    else
        lhs << "I'm in use!" << std::endl;
    return lhs;
}

/*CONSTRUCTORS*/
Shovel::Shovel() {
    this->worker_user = NULL;
    numberOfUses = 0;
};

Shovel::~Shovel() {

};

/*METHODS*/
std::string    Shovel::use() {
    this->numberOfUses++;
    return "using Shovel";
};

#endif