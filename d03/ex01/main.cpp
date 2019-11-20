// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 03:37:31 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 04:50:45 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap ft1("Alf");
	FragTrap ft2("Bob");
	FragTrap ft3(ft1);
	std::cout << std::endl;


	ft3 = ft2;
	std::cout << std::endl;

	ft1.rangedAttack("Bob");
	std::cout << std::endl;

	ft2.takeDamage(20);
	std::cout << std::endl;

	ft1.meleeAttack("Bob");
	std::cout << std::endl;

	ft2.takeDamage(30);
	std::cout << std::endl;

	ft2.beRepaired(21);
	std::cout << std::endl;

	ft1.takeDamage(3);
	std::cout << std::endl;

	ft1.beRepaired(3);
	std::cout << std::endl;

	ft1.takeDamage(1000);
	std::cout << std::endl;

	ft1.beRepaired(1000);
	std::cout << std::endl;

	ft1.vaulthunter_dot_exe("1");
	ft1.vaulthunter_dot_exe("2");
	ft1.vaulthunter_dot_exe("3");
	ft1.vaulthunter_dot_exe("4");
	ft1.vaulthunter_dot_exe("5");
	std::cout << std::endl;

//ex01

	ScavTrap st1("John");
	ScavTrap st2("Ben");
	ScavTrap st3;
	std::cout << std::endl;

	st1.meleeAttack("bob");
	st1.rangedAttack("Alf");
	std::cout << std::endl;

	st2.takeDamage(45);
	st2.beRepaired(21);
	std::cout << std::endl;

	st3.challengeNewcomer();
	st3.challengeNewcomer();
	std::cout << std::endl;
	return (0);
}
