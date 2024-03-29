
#include "includes/RobotomyRequestForm.hpp"
#include <fstream>
#include <cstdlib>
#include <string>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Trob", 72, 45), _target(target) {
	// _isSigned = false;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) { *this = src; }


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs) {
	_isSigned = rhs._isSigned;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const RobotomyRequestForm& rhs) {
	os << rhs.getName() << " RobotomyRequestForm grade " << rhs.getGrade() << std::endl;
	return os;
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const {
	if (executor.getGrade() > _execGrade)
		throw GradeTooLowException();
	else if (_isSigned == false)
		throw UnsignedFormularyException();

	srand(time(NULL));
	int randomNumber = rand() % 2;
	if (randomNumber % 2)
		std::cout << _target << " has been robotized with success!" << std::endl;
	else
		std::cout << "Robotized operation on " << _target << " failed!" << std::endl;
}
