// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 17:24:16 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 18:02:30 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w) : _name(name), weapon(w)
{
	std::cout << "HumanA constructed" << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << "HumanA destructed" << std::endl;
}

void	HumanA::attack(void) const
{
	std::cout << _name << " attacks with his " << weapon.getType() << std::endl;
}
