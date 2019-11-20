// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Weapon.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 16:52:40 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 17:47:35 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon
{
private:
	std::string _type;

public:
	Weapon(std::string type);
	~Weapon(void);
	std::string const&	getType(void);
	void	setType(std::string type);
};

#endif
