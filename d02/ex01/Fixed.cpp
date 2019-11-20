// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 01:20:42 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 19:12:48 by mnguyen          ###   ########.fr       //
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

Fixed::Fixed(const int fix)
{
	this->setRawBits(fix);
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float fix)
{
	this->setRawBits(fix);
	std::cout << "Float constructor called" << std::endl;
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
    this->_fix = static_cast<int>(roundf(static_cast<float>(raw << Fixed::_fracBits)));
}

void	Fixed::setRawBits(float const raw)
{
    this->_fix = static_cast<int>(roundf(raw * (1 << Fixed::_fracBits)));
}

Fixed&	Fixed::operator=(Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix = copy._fix;

	return *this;
}

std::ostream&	operator<<(std::ostream &o, Fixed const &copy)
{
	o << copy.toFloat();
    return o;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fix) / static_cast<float>(1 << Fixed::_fracBits);
}

int		Fixed::toInt(void) const
{
	return this->_fix / (1 << Fixed::_fracBits);
}
