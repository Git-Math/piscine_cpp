// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.cpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:14:51 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:44:46 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N)
{
	std::string ran[] = {"Dylan", "Max", "Boris", "Thomas", "Cyril", "Ergent", "Emile", "Mathieu"};
	this->_horde = new Zombie[N];
	while (N-- > 0)
	{
		this->_horde[N].setname(ran[rand() % 8]);
		this->_horde[N].settype("horde");
	}
	std::cout << "ZombieHorde created" << std::endl;
}

ZombieHorde::~ZombieHorde(void)
{
	delete[] this->_horde;
	std::cout << "ZombieHorde destroyed" << std::endl;
}

void	ZombieHorde::announce(void) const
{
	for (size_t i = this->_N; i; i--)
		this->_horde[i - 1].announce();
}
