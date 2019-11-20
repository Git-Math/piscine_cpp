// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   AWeapon.hpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 18:44:40 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:06:47 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class AWeapon
{
private:
	AWeapon(void);
	std::string _name;
	int		_damage;
	int		_apcost;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & copy);
	virtual ~AWeapon(void);
	std::string const getName(void) const;
	AWeapon& operator=(AWeapon const& copy);
	int getAPCost(void) const;
	int getDamage(void) const;
	virtual void attack(void) const = 0;
};

#endif
