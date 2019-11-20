// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 01:36:41 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 23:28:48 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Fixed.hpp"

int const Fixed::_fracBits = 8;

Fixed::Fixed(void) : _fix(0)
{

}

Fixed::Fixed(Fixed const &toCopy) : _fix(toCopy._fix)
{
}

Fixed::Fixed(const int fix)
{
	this->setRawBits(fix);
}

Fixed::Fixed(const float fix)
{
	this->setRawBits(fix);
}

Fixed::~Fixed(void)
{

}

int		Fixed::getRawBits(void)const
{
	return this->_fix;
}

void	Fixed::setRawBits(int const raw)
{
	this->_fix = static_cast<int>(roundf(static_cast<float>(raw << Fixed::_fracBits)));
}

void	Fixed::setRawBits(float const raw)
{
	this->_fix = static_cast<int>(roundf(raw * power(Fixed::_fracBits)));
}

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed&	Fixed::operator=(Fixed const &rhs)
{
	this->_fix = rhs._fix;

	return *this;
}

Fixed	Fixed::operator+(Fixed const &rhs)const
{
	Fixed result;

	result._fix = this->_fix + rhs._fix;
	return result;
}

Fixed	Fixed::operator-(Fixed const &rhs)const
{
	Fixed result;

	result._fix = this->_fix - rhs._fix;
	return result;
}

Fixed	Fixed::operator*(Fixed const &rhs)const
{
	Fixed result;

	result._fix = this->_fix * rhs._fix / (1 << this->_fracBits);
	return result;
}

Fixed	Fixed::operator/(Fixed const &rhs)const
{
	Fixed result;

    if (rhs._fix)
        result._fix = static_cast<int>(static_cast<float>(this->_fix) / static_cast<float>(rhs._fix) * static_cast<float>(1 << this->_fracBits));
    else
	{
		std::cout << "error, division by 0" << std::endl;
		exit(0);
	}
    return result;
}

bool	Fixed::operator>(Fixed const &rhs)const
{
	return this->_fix > rhs._fix;
}

bool	Fixed::operator>=(Fixed const &rhs)const
{
	return this->_fix >= rhs._fix;
}

bool	Fixed::operator<(Fixed const &rhs)const
{
	return this->_fix < rhs._fix;
}

bool	Fixed::operator<=(Fixed const &rhs)const
{
	return this->_fix <= rhs._fix;
}

bool	Fixed::operator==(Fixed const &rhs)const
{
	return this->_fix == rhs._fix;
}

bool	Fixed::operator!=(Fixed const &rhs)const
{
	return this->_fix != rhs._fix;
}

Fixed&	Fixed::operator++(void)
{
	this->_fix++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed beforeInc(*this);

	this->operator++();
	return beforeInc;
}

Fixed&	Fixed::operator--(void)
{
	this->_fix--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed beforeInc(*this);

	this->operator--();
	return beforeInc;
}

Fixed&	Fixed::min(Fixed &fix1, Fixed &fix2)
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed const&	Fixed::min(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 > fix2 ? fix2 : fix1;
}

Fixed&	Fixed::max(Fixed &fix1, Fixed &fix2)
{
	return fix1 < fix2 ? fix2 : fix2;
}

Fixed const&	Fixed::max(Fixed const &fix1, const Fixed &fix2)
{
	return fix1 < fix2 ? fix2 : fix1;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>(this->_fix) / static_cast<float>(power(Fixed::_fracBits));
}

int		Fixed::toInt(void) const
{
	return this->_fix / power(Fixed::_fracBits);
}

int Fixed::power(int ex) const
{
	int	result = 2;

	while (--ex > 0)
		result *= 2;

	return result;
}
