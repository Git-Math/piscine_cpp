// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 01:47:02 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 03:48:30 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include <ctime>

class FragTrap
{
public:
	FragTrap(void);
	FragTrap(std::string n);
	FragTrap(FragTrap const &copy);
	~FragTrap(void);
	FragTrap	&operator=(FragTrap const& copy);
	void	rangedAttack(std::string const & target) const;
	void	meleeAttack(std::string const & target) const;
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);

protected:
	std::string name;
	unsigned int		hit_points;
	unsigned int		max_hit_points;
	unsigned int		energy_points;
	unsigned int		max_energy_points;
	unsigned int		level;
	unsigned int		melee_attack_damage;
	unsigned int		ranged_attack_damage;
	unsigned int		armor_damage_reduction;
	
};

#endif
