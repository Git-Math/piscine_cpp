// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanB.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 17:51:15 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 18:04:41 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB
{
private:
	std::string const _name;

public:
    HumanB(std::string name);
    ~HumanB(void);
    void    attack(void) const;
	void	setWeapon(Weapon& w);
	Weapon* weapon;
};

#endif
