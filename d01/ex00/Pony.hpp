// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Ponny.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:55:07 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 15:43:33 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PONNY_HPP
# define PONNY_HPP

# include <iostream>

class Ponny
{
private:

	std::string _name;

public:
	
	Ponny(std::string name);
	~Ponny(void);
	
	void	jump(void) const;
};

#endif
