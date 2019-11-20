// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 15:08:23 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 15:47:36 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

void	ponyOnTheHeap(void)
{
	Ponny* ponny1 = new Ponny("Heap");

	ponny1->jump();
	delete ponny1;
}

void	ponyOnTheStack(void)
{
	Ponny ponny2 = Ponny("Stack");

	ponny2.jump();
}

int		main(void)
{
	ponyOnTheHeap();
	std::cout << "back in the main" << std::endl;
	ponyOnTheStack();
	std::cout << "back in the main" << std::endl;
	return (0);
}
