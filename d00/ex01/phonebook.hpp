// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   phonebook.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 18:26:11 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 04:04:22 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>

class Contact
{
private:

	std::string _first_name;
	std::string _last_name;
	std::string _nickname;
	std::string _login;
	std::string _postal_adress;
	std::string _email_adress;
	std::string _phone_number;
	std::string _birthday_date;
	std::string _favorite_meal;
	std::string _underwear_color;
	std::string _darkest_secret;

	void    _aff(std::string) const;
    
public:
	void    add(void);
	void    list(int) const;
    void    info(void) const;

};

#endif
