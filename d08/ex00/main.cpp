// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/26 01:59:49 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/26 02:58:48 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "easyfind.hpp"

int main(void)
{
	std::list<int> list;
	list.push_back(1);
	list.push_back(7);
	list.push_back(0);
	list.push_back(42);
	list.push_back(-42);
	if (!easyfind(list, 42))
		std::cout << "Element not found in the container" << std::endl;
	if (!easyfind(list, 2))
		std::cout << "Element not found in the container" << std::endl;

	std::vector<int> vec;
    vec.push_back(21);
    vec.push_back(12);
    vec.push_back(11);
    vec.push_back(0);
    vec.push_back(-12);
    if (!easyfind(vec, 21))
		std::cout << "Element not found in the container" << std::endl;
    if (!easyfind(vec, 42))
		std::cout << "Element not found in the container" << std::endl;
    return 0;
}
