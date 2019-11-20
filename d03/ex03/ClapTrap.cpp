// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 15:13:32 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:32:43 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("default"), hit_points(100), max_hit_points(100),
                           level(1)
{
    srand(time(NULL));
	std::cout << "ClapTrap default contructor called, name " << this->name << std::endl;
}

ClapTrap::ClapTrap(std::string n) : name(n), hit_points(100), max_hit_points(100),
                                    level(1)
{
    srand(time(NULL));
	std::cout << "ClapTrap contructor called, name " << this->name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &copy)
{
    *this = copy;
	std::cout << "ClapTrap copy constructor called, name " << this->name << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap&   ClapTrap::operator=(ClapTrap const& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->hit_points = copy.hit_points;
    this->max_hit_points = copy.max_hit_points;
    this->energy_points = copy.energy_points;
    this->max_energy_points = copy.max_energy_points;
    this->level = copy.level;
    this->name = copy.name;
    this->melee_attack_damage = copy.melee_attack_damage;
    this->ranged_attack_damage = copy.ranged_attack_damage;
    this->armor_damage_reduction = copy.armor_damage_reduction;
    return *this;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    amount -= amount > this->armor_damage_reduction ? this->armor_damage_reduction : amount;
    this->hit_points -= this->hit_points > amount ? amount : this->hit_points;
	std::cout << "Trap " << name << " takes " << amount << " damages, " << this->hit_points << " HP left" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    this->hit_points = amount + this->hit_points > 100 ? 100 : amount + this->hit_points;
	std::cout << "Trap " << name << " regain " << amount << " HP, " << this->hit_points << " HP left" << std::endl;
}
