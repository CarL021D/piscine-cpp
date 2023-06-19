#pragma once
#include "includes.hpp"

class Character : public ICharacter {
	public:
			Character();
			virtual ~Character() {}
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
	private:
			virtual std::string			name;
			virtual std::list<AMateria>	unequipItems;
			virtual AMateria			items[4];

}