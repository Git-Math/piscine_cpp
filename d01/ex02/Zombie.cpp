// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:56:03 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 18:05:16 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : _name(name), _type(type)
{
	std::cout << "Zombie " << this->_name << " is born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie " << this->_name << " is dead" << std::endl;
}

void	Zombie::announce(void) const
{
	std::cout << "<" << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}
