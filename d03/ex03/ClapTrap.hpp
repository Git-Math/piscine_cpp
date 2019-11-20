// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ClapTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 15:13:28 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:25:15 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <cstdlib>

class ClapTrap
{
public:
    ClapTrap(void);
    ClapTrap(std::string n);
    ClapTrap(ClapTrap const &copy);
    ~ClapTrap(void);
    ClapTrap    &operator=(ClapTrap const& copy);
    void    rangedAttack(std::string const & target) const;
    void    meleeAttack(std::string const & target) const;
    void    takeDamage(unsigned int amount);
    void    beRepaired(unsigned int amount);

protected:
	std::string name;
    unsigned int        hit_points;
    unsigned int        max_hit_points;
    unsigned int        energy_points;
    unsigned int        max_energy_points;
    unsigned int        level;
    unsigned int        melee_attack_damage;
    unsigned int        ranged_attack_damage;
    unsigned int        armor_damage_reduction;

};

#endif
