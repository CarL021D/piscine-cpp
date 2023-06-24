#include "includes/MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (short i = 0; i < 4; i++)
		_inventory[i] = NULL;
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (short i = 0; i < 4; i++)
		if (_inventory[i])
			delete _inventory[i];	
}

MateriaSource::MateriaSource(const MateriaSource& cpy) { *this = cpy; }

MateriaSource& MateriaSource::operator=(const MateriaSource& rhs) {
	for (short i = 0; i < 4; i++)
		this->_inventory[i] = rhs.getMateria(i)->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria* materia) {
	
	std::cout << materia->getType() << std::endl;
	std::cout << "<<<<>>>>" << std::endl;
	for (short i = 0; i < 4; i++) {
		if (!_inventory[i]) {
			_inventory[i] = materia;
			return;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string& type) {
	for (short i = 0; i < 4; i++) {
		if (_inventory[i] && type == _inventory[i]->getType()) {
			std::cout << std::endl << "TRUE" << std::endl;
			return _inventory[i]->clone();
		}
	}
	return NULL; 
}

AMateria* MateriaSource::getMateria(short i) const { return this->_inventory[i]; }
