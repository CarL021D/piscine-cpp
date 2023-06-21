#pragma once
#include "includes.hpp"

class Ice : public AMateria {
	public:
			Ice();
			~Ice();
			Ice(const Ice& cpy);
			Ice& operator=(const Ice& rhs);

			Ice(const std::string& type);
			std::string const & getType() const;
			Ice*	clone() const;
			void	use(ICharacter& target);
			Ice*	createMateria(std::string type);
	protected:
			std::string		_type;
};