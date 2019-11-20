// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:27:46 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 17:08:44 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Victim.hpp"

Victim::Victim(void) : name("Victim")
{
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
}

Victim::Victim(std::string n) : name(n)
{
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
}

Victim::Victim(Victim const &copy)
{
    *this = copy;
	std::cout << "Some random victim called " << this->name << " just popped !" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->name << " just died for no apparent reason !" << std::endl;
}

Victim& Victim::operator=(Victim const& copy)
{
    this->name = copy.name;
    return *this;
}

std::ostream& operator<<(std::ostream &o, Victim const &rhs)
{
	std::cout << "I'm " << rhs.getName() << " and I like otters !" << std::endl;
    return o;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a cute little sheep !" << std::endl;
}

std::string Victim::getName(void) const
{
	return this->name;
}
