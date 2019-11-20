// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:02:57 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 18:38:51 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
}

Sorcerer::Sorcerer(std::string n, std::string t) : name(n), title(t)
{
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &copy)
{
	*this = copy;
	std::cout << this->name << ", " << this->title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const& copy)
{
	this->name = copy.name;
	this->title = copy.title;
	return *this;
}

std::ostream& operator<<(std::ostream &o, Sorcerer const &rhs)
{
    o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and I like ponies !" << std::endl;
    return o;
}

void Sorcerer::polymorph(Victim const & vic) const
{
	vic.getPolymorphed();
}

std::string Sorcerer::getName(void) const
{
	return this->name;
}

std::string Sorcerer::getTitle(void) const
{
	return this->title;
}
