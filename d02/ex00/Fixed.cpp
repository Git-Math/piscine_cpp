// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 21:21:23 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 17:45:39 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int const Fixed::_fracBits = 8;

Fixed::Fixed(void) : _fix(0)
{
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(Fixed const &toCopy) : _fix(toCopy._fix)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fix;
}
void	Fixed::setRawBits(int const raw)
{
	this->_fix = raw;
}

Fixed&	Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix = copy._fix;

	return *this;
}
