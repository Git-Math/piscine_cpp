// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 17:49:22 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 18:06:28 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	std::cout << "HumanB constructed" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB destructed" << std::endl;
}

void    HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& w)
{
	this->weapon = &w;
}
