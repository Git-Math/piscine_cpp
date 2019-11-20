// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/18 01:22:24 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 19:10:50 by mnguyen          ###   ########.fr       //
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
	Fixed&	operator=(Fixed const &copy);
	float	toFloat(void) const;
	int		toInt(void) const;

private:
	int	_fix;
	static int const _fracBits;
};

std::ostream&	operator<<(std::ostream &o, Fixed const &copy);

#endif
