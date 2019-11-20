// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Brain.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 01:47:07 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 03:35:54 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructed" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructed" << std::endl;
}

std::string		Brain::identify(void) const
{
	std::stringstream add;
	add << this;
	return (add.str());
}
