// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 16:14:48 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:41:12 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent(void)
{
	this->_type = "Default";
}

void	ZombieEvent::setZombieType(std::string type)
{
	std::cout << "type set to " << type << std::endl;
	this->_type = type;
}

Zombie*	ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->_type));
}
