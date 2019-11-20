// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Character.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 23:02:47 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:29:42 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# define AP_MAX 40

# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
public:
	Character(void);
	Character(std::string const &name);
	Character(Character const &copy);
	~Character(void);

	std::string const&getName(void) const;
	int getAp(void)const;
	AWeapon* getWeapon(void)const;

	void recoverAP(void);
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);

	Character& operator=(Character const &copy);

private:
	std::string _name;
	int _ap;
	AWeapon*_weapon;

};

std::ostream& operator<<(std::ostream &o, Character const &rhs);

#endif
