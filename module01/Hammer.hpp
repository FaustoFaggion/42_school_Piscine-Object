#ifndef HAMMER_HPP
#define HAMMER_HPP

#include "ATool.hpp"

class Hammer: public ATool {

    private:
    
    public:
        Hammer();
        ~Hammer();

        std::string    use();
        
    friend bool operator==(Hammer &lhs, Hammer &rhs);
    friend std::ostream&   operator<<(std::ostream &lhs, Hammer &rhs);
};

Hammer::Hammer() {
    this->worker_user = NULL;
    numberOfUses = 0;
};

Hammer::~Hammer() {

};

/*OPERATORS*/

bool operator==(Hammer &lhs, Hammer &rhs) {

    std::string lhs_tool = lhs.use();
    std::string rhs_tool = rhs.use();

	if (lhs_tool != rhs_tool)
		return (false);
	return (true);
}

bool operator==(Hammer &lhs, ATool &rhs) {

    std::string lhs_tool = lhs.use();
    std::string rhs_tool = rhs.use();

	if (lhs_tool != rhs_tool)
		return (false);
	return (true);
}

std::ostream&   operator<<(std::ostream &lhs, Hammer &rhs) {
    lhs << "number of uses: " << rhs.numberOfUses << std::endl;
    if (rhs.worker_user == NULL)
        lhs << "Nobody is using me!" << std::endl;
    else
        lhs << "I'm in use!" << std::endl;
    return lhs;
}

/*METHODS*/
std::string    Hammer::use() {
    
    this->numberOfUses++;
    return "using Hammer";
};

#endif