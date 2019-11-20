// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 02:33:49 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 03:48:16 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Human.hpp"

Human::Human(void)
{
	std::cout << "Human constructed" << std::endl;
}

Human::~Human(void)
{
	std::cout << "Human destructed" << std::endl;
}

std::string		Human::identify(void) const
{
	return (this->_brain.identify());
}

Brain const&		Human::getBrain(void) const
{
	return (this->_brain);
}
