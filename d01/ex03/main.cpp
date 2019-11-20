// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 17:22:38 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 00:57:11 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void)
{
	srand(time(NULL));
	ZombieHorde* zombiehorde1 = new ZombieHorde(3);
	zombiehorde1->announce();
	delete zombiehorde1;
	ZombieHorde* zombiehorde2 = new ZombieHorde(5);
    zombiehorde2->announce();
	delete zombiehorde2;
	return (0);
}
