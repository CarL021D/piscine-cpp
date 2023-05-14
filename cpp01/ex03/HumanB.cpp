#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name) : _weapon(),  _name(name) {};

HumanB::~HumanB() {};

void    HumanB::setWeapon(Weapon& weapon) { _weapon = &weapon; }

void	HumanB::attack() {

	std::cout 	<< _name
				<< " attacks with their "
				<< _weapon->getType()
				<< std::endl;
}