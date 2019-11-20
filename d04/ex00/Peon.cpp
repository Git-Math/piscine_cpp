// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:40:51 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 17:09:40 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Peon.hpp"

Peon::Peon(void) : Victim("Peon")
{
	this->name = "Peon";
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string n) : Victim(n)
{
	this->name = n;
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const &copy) : Victim(copy.name)
{
    *this = copy;
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony !" << std::endl;
}
