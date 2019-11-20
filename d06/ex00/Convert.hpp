// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Convert.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 05:37:24 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/24 20:27:56 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <cstdlib>
# include <iostream>
# include <string>
# include <cmath>
# include <climits>

class Convert
{
public:
	
	Convert(void);
	Convert(Convert const & copy);
	void conv(char * s) const;
	virtual ~Convert(void);
	Convert & operator=(Convert const & copy);
private:
	void cast(char c) const;
	void cast(int i) const;
	void cast(float f, bool b) const;
	void cast(double d) const;
	void imp(void) const;
};

#endif
