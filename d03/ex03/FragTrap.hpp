// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   FragTrap.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 01:47:02 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 15:58:39 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <cstdlib>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	FragTrap(void);
	FragTrap(std::string n);
	FragTrap(FragTrap const &copy);
	~FragTrap(void);
	void    rangedAttack(std::string const & target) const;
    void    meleeAttack(std::string const & target) const;
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif
