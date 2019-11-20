// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 01:46:52 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:55:08 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("default")
{
	this->energy_points = 100;
	this->max_energy_points = 100;
	this->melee_attack_damage = 30;
	this->ranged_attack_damage = 20;
	this->armor_damage_reduction = 5;
	srand(time(NULL));
	std::cout << "FragTrap default contructor called, name " << this->name << std::endl;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	this->energy_points= 100;
    this->max_energy_points = 100;
    this->melee_attack_damage =30;
    this->ranged_attack_damage = 20;
    this->armor_damage_reduction = 5;
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

void  FragTrap::rangedAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<  " at range, causing " << this->ranged_attack_damage << " points of damage !" << std::endl;
}

void  FragTrap::meleeAttack(std::string const & target) const
{
	std::cout << "FR4G-TP " << name << " attacks " << target <<  " at melee, causing " << this->melee_attack_damage << " points of damage !" << std::endl;
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
