// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 18:26:04 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 04:07:57 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "phonebook.hpp"

int		main(void)
{
	Contact phonebook[8];
	std::string buff;
	int i = 0;
	int j;

	while (1)
	{
		std::cout << "input a command: ";
		std::getline(std::cin, buff);
		if (buff == "EXIT")
			return 0;
		else if (buff == "ADD")
		{
			if (i > 7)
				std::cout << "you can't add more than 8 contacts" << std::endl;
			else
				phonebook[i++].add();
		}
		else if (buff == "SEARCH")
		{
			if (i == 0)
				std::cout << "no contact add" << std::endl;
			else
			{
				std::cout << "|     index|first name| last name|  nickname|" << std::endl;
				j = 0;
				while (j < i)
				{
					phonebook[j].list(j);
					j++;
				}
				std::cout << "select an index : ";
				std::getline(std::cin, buff);
				while (buff.length() != 1 || buff[0] < '0' || buff[0] >= i + 48)
				{
					std::cout << "select an index : ";
					std::getline(std::cin, buff);
				}
				phonebook[buff[0] - 48].info();
			}
		}
		else
			std::cout << "ADD|SEARCH|EXIT" << std::endl;
	}
}
