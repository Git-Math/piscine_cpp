// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 04:20:38 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:56:27 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("default")
{
	this->energy_points = 50;
    this->max_energy_points = 50;
    this->melee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    this->armor_damage_reduction = 3;
	srand(time(NULL));
	std::cout << "ScavTrap is born, name " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string n) : ClapTrap(n)
{
	this->energy_points = 50;
    this->max_energy_points = 50;
    this->melee_attack_damage = 20;
    this->ranged_attack_damage = 15;
    this->armor_damage_reduction = 3;
    srand(time(NULL));
	std::cout << "ScavTrap is born, name " << this->name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &copy)
{
    *this = copy;
	std::cout << "ScavTrap is born, name " << this->name << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap is Dead" << std::endl;
}

void  ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "ScavTrap " << name << " fires " << target <<  " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void  ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "ScavTrap " << name << " fires " << target <<  " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
	std::string tab[] = {"kill FR4G-TP Bob", "kill FR4G-TP Alf", "never have less than 50 hp", "beat Dylan", "zboub max", "torment boris"};
	std::cout << this->name <<  ": My challenge is to " << tab[rand() % 6] << std::endl;
}
