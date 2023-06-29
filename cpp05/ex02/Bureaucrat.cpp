#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const std::string name, int16_t grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy) { *this = cpy; }

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs) {
	this->_grade = rhs._grade;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& rhs) {
	os << rhs.getName() << " bureaucrat grade " << rhs.getGrade() << std::endl;
	return os;
}

void Bureaucrat::upgradeGrade() {
	if (this->_grade == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void Bureaucrat::demoteGrade() {
	if (this->_grade == 150)
		throw GradeTooLowException();
	this->_grade++;
}

void Bureaucrat::signForm(const Form& form) const {
	if (form.getIsSigned() == true)
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	else if ((form.getIsSigned() == false) && (form.getGrade() < 1)) {
		std::cout	<< this->_name << " couldn't sign " << form.getName() << " because "
					<< form.getGrade() << "is lower than 1" << std::endl;
	}
	else if ((form.getIsSigned() == false) && (form.getGrade() > 150)) {
		std::cout	<< this->_name << " couldn't sign " << form.getName() << " because "
					<< form.getGrade() << "is greater than 150" << std::endl;
	}
} 

void Bureaucrat::executeForm(const AForm& form) {
	this->signForm(form);
	form.execute(*this);

	if ((this->getGrade() <= form.getGrade()) && form.getIsSigned() == true)
		std::cout << this->_name << " executed " << form.getName() << std::endl;
}

std::string const	Bureaucrat::getName() const { return this->_name; }
int16_t				Bureaucrat::getGrade() const { return this->_grade; }

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Grade too high exception";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "Grade too low exception";
}