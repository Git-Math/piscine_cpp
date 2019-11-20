// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Fixed.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 21:21:07 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/18 15:49:21 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const &toCopy);
	~Fixed(void);
	int                 getRawBits(void)    const;
	void                setRawBits(int const raw);
	Fixed               &operator=(Fixed const &copy);

private:
	int                 _fix;
	static int const    _fracBits;
};

#endif
