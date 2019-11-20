// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ScavTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 04:22:20 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:59:41 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
    ScavTrap(void);
    ScavTrap(std::string n);
    ScavTrap(ScavTrap const &copy);
    ~ScavTrap(void);
	void    rangedAttack(std::string const & target) const;
    void    meleeAttack(std::string const & target) const;
    void    challengeNewcomer(void);
};

#endif
