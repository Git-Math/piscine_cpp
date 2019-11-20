// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 17:22:38 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:42:19 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	randomChump(void)
{
	std::string ran[] = {"Dylan", "Max", "Boris", "Thomas", "Cyril", "Ergent", "Emile", "Mathieu"};
	int i = rand() % 8;
	Zombie randzombie = Zombie(ran[i], "Random");
	randzombie.announce();
}

int		main(void)
{
	ZombieEvent event;
	Zombie* zombie1 = event.newZombie("Dead");
	event.setZombieType("Super");
	Zombie* zombie2 = event.newZombie("Blood");
	zombie1->announce();
	zombie2->announce();
	delete zombie1;
	delete zombie2;
	srand(time(NULL));
	randomChump();
	randomChump();
	randomChump();
	return (0);
}
