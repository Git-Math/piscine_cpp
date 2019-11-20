// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   HumanA.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 17:24:25 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 17:48:16 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string const _name;
	
public:
	HumanA(std::string name, Weapon& w);
	~HumanA(void);
	void	attack(void) const;
	Weapon& weapon;
};

#endif
