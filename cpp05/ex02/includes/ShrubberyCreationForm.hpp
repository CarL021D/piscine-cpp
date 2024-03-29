
#pragma once
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public AForm {
	public:
			~ShrubberyCreationForm();
			ShrubberyCreationForm(const ShrubberyCreationForm& src);
			ShrubberyCreationForm(const std::string target);
			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

            void	execute(const Bureaucrat& executor) const;
	private:
			ShrubberyCreationForm();

			void	printTree(std::ofstream& os) const;

			const std::string	_target;
};

std::ostream& operator<<(std::ostream& os, const AForm& rhs);
