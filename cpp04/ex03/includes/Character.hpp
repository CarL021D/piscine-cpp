#pragma once
#include "includes.hpp"

class Character : public ICharacter {
	public:
			Character();
			virtual ~Character();
			Character(std::string name);
			Character(const Character& src);
			Character& operator=(const Character& rhs);

			std::string const & getName() const;
			AMateria* getItems(short i) const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
			void displayEquipment() const;
			void displayUnequippedEquipment() const;

	private:
			std::string				_name;
			AMateria*				_items[4];
			AMateria**				_unequippedItems;
			int						_unequippedItemsCount;
};