#include "includes/includes.hpp"

int main()
{
	// Character* char1 = new Character("Lee");
	// Character* char2 = new Character("Rob");
	// IMateriaSource* src = new MateriaSource();

	// src->learnMateria(new Ice());
	// src->learnMateria(new Cure());

	// // Equip/Unequip materia
	// std::cout << std::endl;
	// char1->displayUnequippedEquipment();
	// char1->equip(new Ice());
	// char1->use(0, *char2);
	// char1->unequip(0);
	// char1->use(0, *char2);
	// std::cout << std::endl;

	// // Equipe mateira using materiasource
	// char1->equip(src->createMateria("ice"));
	// char1->equip(src->createMateria("cure"));
	// char1->equip(src->createMateria("ice"));
	// char1->equip(src->createMateria("cure"));
	// char1->equip(src->createMateria("ice"));
	// std::cout << std::endl;

	// char1->displayEquipment();
	// std::cout << std::endl;

	// char1->use(0, *char2);
	// char1->use(3, *char2);
	// char1->use(4, *char2);
	// std::cout << std::endl;

	// char1->unequip(1);
	// char1->use(1, *char2);
	// char1->unequip(1);
	// std::cout << std::endl;

	// char1->displayUnequippedEquipment();
	// std::cout << std::endl;

	// // Character index error
	// char1->use(3, *char2);

	// delete char1;
	// delete char2;
	// delete src;



	Character* char1 = new Character("Lee");
	Character* char3;

	std::cout << "char1" << std::endl;
	char1->equip(new Ice());
	char1->equip(new Ice());
	char1->equip(new Cure());
	char1->equip(new Cure());
	std::cout << std::endl;

	char3 = new Character(*char1);

	std::cout << "char1" << std::endl;
	char1->displayEquipment();
	char1->unequip(2);
	char1->unequip(3);
	std::cout << std::endl;

	std::cout << "char1" << std::endl;
	char1->displayEquipment();

	std::cout << "char3" << std::endl;
	char3->displayEquipment();
	std::cout << std::endl;

	std::cout << "char1" << std::endl;
	char1->displayUnequippedEquipment();
	std::cout << std::endl;
	
	std::cout << "char3" << std::endl;
	char3->unequip(0);
	char3->displayEquipment();
	
	std::cout << "char3" << std::endl;
	char3->displayUnequippedEquipment();
	std::cout << std::endl;

	delete char1;
	delete char3;
}