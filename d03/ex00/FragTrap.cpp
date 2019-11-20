// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 01:46:52 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 04:36:06 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : name("default"), hit_points(100), max_hit_points(100),
                           energy_points(100), max_energy_points(100), level(1),
                           melee_attack_damage(30), ranged_attack_damage(20),
                           armor_damage_reduction(5)
{
	srand(time(NULL));
	std::cout << "FragTrap default contructor called, name " << this->name << std::endl;
}

FragTrap::FragTrap(std::string n) : name(n), hit_points(100), max_hit_points(100),
									energy_points(100), max_energy_points(100), level(1), 
									melee_attack_damage(30), ranged_attack_damage(20),
									armor_damage_reduction(5)
{
	srand(time(NULL));
	std::cout << "FragTrap contructor called, name " << this->name << std::endl;
}

FragTrap::FragTrap(FragTrap const &copy)
{
	*this = copy;
	std::cout << "FragTrap copy constructor called, name " << this->name << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& copy)
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

void  FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<  " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void  FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<  " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
}

void    FragTrap::takeDamage(unsigned int amount)
{
	amount -= amount > this->armor_damage_reduction ? this->armor_damage_reduction : amount;
	this->hit_points -= this->hit_points > amount ? amount : this->hit_points;
	std::cout << "FR4G-TP " << name << " takes " << amount << " damages, " << this->hit_points << " HP left" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
	this->hit_points = amount + this->hit_points > 100 ? 100 : amount + this->hit_points;
	std::cout << "FR4G-TP " << name << " regain " << amount << " HP, " << this->hit_points << " HP left" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->energy_points < 25)
		std::cout << "FR4G-TP " << name << " is out of energy" << std::endl;
	else
	{
		this->energy_points -= 25;
		std::string	tab[] = {"Hydrocanon", "Deflagration", "Fatal_foudre", "Psyko", "Laser_glace"};
		std::cout << "FR4G-TP " << name << " attacks " << target <<  " with " << tab[rand() % 5] << ", causing 40 points of damage !" << std::endl;
	}
}
