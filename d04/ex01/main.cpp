// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 23:05:40 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:40:23 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Character.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"


int		main(void)
{
	Character akali("Akali");

	std::cout << akali;
	
	PowerFist	a;
	PlasmaRifle	b;
	Enemy		*c = new Enemy(5, "Shaco");
	Enemy		*d = new Enemy(160, "Mundo");
	SuperMutant	e;
	RadScorpion	f;

	std::cout << "yo" << std::endl;
	akali.attack(c);
	std::cout << akali;
	akali.equip(&a);
	akali.attack(c);
	std::cout << akali;
		akali.attack(d);
		std::cout << akali;
	akali.attack(d);
	std::cout << akali;
		akali.recoverAP();
	akali.equip(&b);
		akali.attack(&e);
	std::cout << "PLANTE" << std::endl;
        akali.recoverAP();
	akali.attack(&f);
	return (0);
}
