// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 16:52:27 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 18:01:46 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon constructed" << std::endl;
}

Weapon::~Weapon(void)
{
	std::cout << "Weapon destructed" << std::endl;
}

std::string const&	Weapon::getType(void)
{
	return this->_type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "Weapon set to " << type << std::endl;
}
