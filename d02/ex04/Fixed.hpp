// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 01:40:01 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 15:51:23 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &toCopy);
	Fixed(const int fix);
	Fixed(const float fix);
	~Fixed(void);

	int		getRawBits(void)const;
	void	setRawBits(int const raw);
	void	setRawBits(float const raw);

	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed&	operator=(Fixed const &rhs);
	Fixed	operator+(Fixed const &rhs)const;
	Fixed	operator-(Fixed const &rhs)const;
	Fixed	operator*(Fixed const &rhs)const;
	Fixed	operator/(Fixed const &rhs)const;

	bool	operator>(Fixed const &rhs)const;
	bool	operator>=(Fixed const &rhs)const;
	bool	operator<(Fixed const &rhs)const;
	bool	operator<=(Fixed const &rhs)const;
	bool	operator==(Fixed const &rhs)const;
	bool	operator!=(Fixed const &rhs)const;

	Fixed&	operator++(void);
	Fixed	operator++(int);
	Fixed&	operator--(void);
	Fixed	operator--(int);

	static Fixed&		min(Fixed &fix1, Fixed &fix2);
	static Fixed const&		min(Fixed const &fix1, const Fixed &fix2);
	static Fixed&	max(Fixed &fix1, Fixed &fix2);
	static Fixed const&		max(Fixed const &fix1, const Fixed &fix2);


private:
	int	_fix;
	static int const _fracBits;
	int		power(int ex) const;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &rhs);

#endif
