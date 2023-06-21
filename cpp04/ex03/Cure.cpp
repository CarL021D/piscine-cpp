#include "includes/Cure.hpp"

Cure::Cure() { std::cout << "Cure constructor called" << std::endl; }

Cure::~Cure() { std::cout << "Cure destructor called" << std::endl; }

Cure::Cure(const Cure& cpy) { *this = cpy; }

Cure::Cure(const std::string& type) {
	if (type != "cure")
	{
		std::cout << "Wrong type name, must be called cure" << std::endl;
		return;
	}
	_type = type;
}

Cure& Cure::operator=(const Cure& rhs) {
	this->_type = rhs.getType();
	return *this;
}


std::string const & Cure::getType() const { return this->_type; }

Cure* Cure::clone() const { return (new Cure()); }

Cure* Cure::createMateria(std::string type) {
	if (type != "cure")
		return 0;
	Cure* newMateria = new Cure("cure");
	// newMateria->_type = this->_type;  
	return newMateria;
}

void Cure::use(ICharacter& target) { std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl; }