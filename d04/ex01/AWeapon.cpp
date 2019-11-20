// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:44:42 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:08:37 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage), _apcost(apcost)
{
}

AWeapon::AWeapon(AWeapon const & copy)
{
	*this = copy;
}

AWeapon::~AWeapon(void)
{
}

AWeapon& AWeapon::operator=(AWeapon const& copy)
{
    this->_name = copy.getName();
    this->_apcost = copy.getAPCost();
	this->_damage = copy.getDamage();
    return *this;
}

std::string const AWeapon::getName(void) const
{
	return this->_name;
}

int AWeapon::getAPCost(void) const
{
	return this->_apcost;
}

int AWeapon::getDamage(void) const
{
	return this->_damage;
}
