// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 04:20:38 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 04:54:41 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : name("default"), hit_points(100), max_hit_points(100),
                           energy_points(50), max_energy_points(50), level(1),
                           melee_attack_damage(20), ranged_attack_damage(15),
                           armor_damage_reduction(3)
{
	srand(time(NULL));
	std::cout << "ScavTrap is born, name " << this->name << std::endl;
}

ScavTrap::ScavTrap(std::string n) : name(n), hit_points(100), max_hit_points(100),
                                    energy_points(50), max_energy_points(50), level(1),
                                    melee_attack_damage(20), ranged_attack_damage(15),
                                    armor_damage_reduction(3)
{
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

ScavTrap&   ScavTrap::operator=(ScavTrap const& copy)
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

void  ScavTrap::rangedAttack(std::string const & target) const
{
	std::cout << "ScavTrap " << name << " fires " << target <<  " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void  ScavTrap::meleeAttack(std::string const & target) const
{
	std::cout << "ScavTrap " << name << " fires " << target <<  " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    amount -= amount > this->armor_damage_reduction ? this->armor_damage_reduction : amount;
    this->hit_points -= this->hit_points > amount ? amount : this->hit_points;
	std::cout << "ScavTrap " << name << " loses " << amount << " HP, " << this->hit_points << " HP left" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    this->hit_points = amount + this->hit_points > 100 ? 100 : amount + this->hit_points;
	std::cout << "ScavTrap " << name << " heals of " << amount << " HP, " << this->hit_points << " HP left" << std::endl;
}

void    ScavTrap::challengeNewcomer(void)
{
	std::string tab[] = {"kill FR4G-TP Bob", "kill FR4G-TP Alf", "never have less than 50 hp", "beat Dylan", "zboub max", "torment boris"};
	std::cout << this->name <<  ": My challenge is to " << tab[rand() % 6] << std::endl;
}
