// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 22:41:31 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 23:28:17 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void) : ClapTrap("default")
{
	this->hit_points = 60;
	this->max_hit_points = 60;
    this->energy_points = 120;
    this->max_energy_points = 120;
    this->melee_attack_damage = 60;
    this->ranged_attack_damage = 5;
    this->armor_damage_reduction = 0;
    srand(time(NULL));
	std::cout << "NinjaTrap default contructor called, name " << this->name << std::endl;
}

NinjaTrap::NinjaTrap(std::string n) : ClapTrap(n)
{
	this->hit_points = 60;
    this->max_hit_points = 60;
    this->energy_points = 120;
    this->max_energy_points = 120;
    this->melee_attack_damage = 60;
    this->ranged_attack_damage = 5;
    this->armor_damage_reduction = 0;
    srand(time(NULL));
	std::cout << "NinjaTrap contructor called, name " << this->name << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &copy)
{
    *this = copy;
	std::cout << "NinjaTrap copy constructor called, name " << this->name << std::endl;
}

NinjaTrap::~NinjaTrap(void)
{
	std::cout << "NinjaTrap destructor called" << std::endl;
}

void  NinjaTrap::rangedAttack(NinjaTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "NinjaTrap" <<  " at range, causing " 
			  << this->ranged_attack_damage << " points of damage !" << std::endl;
	target.takeDamage(this->ranged_attack_damage);
}

void  NinjaTrap::rangedAttack(FragTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "FragTrap" <<  " at range, causing "
              << this->ranged_attack_damage << " points of damage !" << std::endl;
    target.takeDamage(this->ranged_attack_damage);
}

void  NinjaTrap::rangedAttack(ScavTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "ScavTrap" <<  " at range, causing "
              << this->ranged_attack_damage << " points of damage !" << std::endl;
    target.takeDamage(this->ranged_attack_damage);
}

void  NinjaTrap::meleeAttack(NinjaTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "NinjaTrap" <<  " at melee, causing "
			  << this->melee_attack_damage << " points of damage !" << std::endl;
	target.takeDamage(this->melee_attack_damage);
}

void  NinjaTrap::meleeAttack(FragTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "FragTrap" <<  " at melee, causing "
              << this->melee_attack_damage << " points of damage !" << std::endl;
    target.takeDamage(this->melee_attack_damage);
}

void  NinjaTrap::meleeAttack(ScavTrap & target) const
{
	std::cout << "Ninja " << name << " attacks " << "ScavTrap" <<  " at melee, causing "
              << this->melee_attack_damage << " points of damage !" << std::endl;
    target.takeDamage(this->melee_attack_damage);
}

void	NinjaTrap::ninjaShoebox(NinjaTrap & target) const
{
	if (!(rand() % 5))
	{
		std::cout << this->name << " kills " << "NinjaTrap" << " with his ultim ninja attack !" << std::endl;
		target.takeDamage(1000);
	}
	else
		std::cout << this->name << " miss his ultim attack" << std::endl;
}

void    NinjaTrap::ninjaShoebox(ScavTrap & target) const
{
 		if (!(rand() % 5))
		{
			std::cout << this->name << " kills " << "ScavTrap" << " with his ultim ninja attack !" << std::endl;
			target.takeDamage(1000);
		}
		else
			std::cout << this->name << " miss his ultim attack" << std::endl;
}

void    NinjaTrap::ninjaShoebox(FragTrap & target) const
{
		if (!(rand() % 5))
		{
			std::cout << this->name << " kills " << "FragTrap" << " with his ultim ninja attack !" << std::endl;
			target.takeDamage(1000);
		}
		else
			std::cout << this->name << " miss his ultim attack" << std::endl;
}
