// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/25 17:38:47 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/25 18:10:20 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Array.hpp"
#include <iostream>

int main(void)
{
	std::string s_tab[] = { "toto", "tata", "tutu" };
	int i_tab[] = { 1, 2, 3, 4, 5 };

	Array<std::string> s_arr(3);
	Array<int> i_arr(5);
	Array<int> ei_arr;
	try
	{
		std::cout << ei_arr[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "ei size: " << ei_arr.size() << ", i size: " << i_arr.size() 
			  << ", s size: " << s_arr.size() << std::endl;
	for (unsigned int i = 0; i < i_arr.size(); i++)
	{
		try
		{
			s_arr[i] = s_tab[i];
			i_arr[i] = i_tab[i];
			std::cout << s_arr[i] << " " << s_tab[i] << std::endl;
			std::cout << i_arr[i] << " " << i_tab[i] << std::endl;
		}
		catch (std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return (0);
}
