#ifndef SECRETARIALOFFICE_HPP
#define SECRETARIALOFFICE_HPP

#include "Room.hpp"
#include "Form.hpp"

class SecretarialOffice: public Room
{
private:
	std::vector<Form*> _archivedForms;

public:

};
#endif