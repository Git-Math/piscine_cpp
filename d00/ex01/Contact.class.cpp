// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Contact.class.cpp                                  :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 18:24:57 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 04:08:44 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "phonebook.hpp"

void	Contact::add(void)
{
	std::cout << "first name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "login : ";
	std::getline(std::cin, this->_login);
	std::cout << "postal adress : ";
	std::getline(std::cin, this->_postal_adress);
	std::cout << "email adress : ";
	std::getline(std::cin, this->_email_adress);
	std::cout << "phone number : ";
	std::getline(std::cin, this->_phone_number);
	std::cout << "birthday date : ";
	std::getline(std::cin, this->_birthday_date);
	std::cout << "favorite meal : ";
	std::getline(std::cin, this->_favorite_meal);
	std::cout << "underwear color : ";
	std::getline(std::cin, this->_underwear_color);
	std::cout << "darkest secret : ";
	std::getline(std::cin, this->_darkest_secret);
}

void	Contact::_aff(std::string s) const
{
	int l = s.length();

	if (l <= 10)
	{
		while (l++ < 10)
			std::cout << " ";
		std::cout << s << "|";
	}
	else
		std::cout << s.substr(0, 9) << "." << "|";
}
void	Contact::list(int j) const
{
	std::cout << "|         " << j << "|";
	this->_aff(this->_first_name);
	this->_aff(this->_last_name);
	this->_aff(this->_nickname);
	std::cout << std::endl;
}

void	Contact::info(void) const
{
	std::cout << "first name : " << this->_first_name << std::endl;
	std::cout << "last name : " << this->_last_name << std::endl;
	std::cout << "nickname : " << this->_nickname << std::endl;
	std::cout << "login : " << this->_login << std::endl;
	std::cout << "postal adress : " << this->_postal_adress << std::endl;
	std::cout << "email adress : " << this->_email_adress << std::endl;
	std::cout << "phone number : " << this->_phone_number << std::endl;
	std::cout << "birthday date : " << this->_birthday_date << std::endl;
	std::cout << "favorite meal : " << this->_favorite_meal << std::endl;
	std::cout << "underwear color : " << this->_underwear_color << std::endl;
	std::cout << "darkest secret : " << this->_darkest_secret << std::endl;
}
