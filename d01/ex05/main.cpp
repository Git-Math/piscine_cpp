// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 02:41:40 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 02:42:15 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Brain.hpp"
#include "Human.hpp"

int main()
{
	Human bob;
	
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
}
