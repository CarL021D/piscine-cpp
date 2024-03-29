/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caboudar <caboudar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 21:31:25 by caboudar          #+#    #+#             */
/*   Updated: 2023/07/31 11:22:26 by caboudar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fractionalBits = 8;

Fixed::Fixed(): _value(0) { std::cout << "Default constructor called" << std::endl; }

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(Fixed const & src) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed &	Fixed::operator=(const Fixed& rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = rhs.getRawBits();
	return *this;
}

void Fixed::setRawBits(const int raw) { this->_value = raw; }

int	Fixed::getRawBits(void) const { 
	std::cout << "getRawBits member function called" << std::endl; 
	return _value;
}
