// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Pony.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 14:52:25 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/16 15:47:45 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Pony.hpp"

Ponny::Ponny(std::string name) : _name(name)
{
	std::cout << "Ponny " << this->_name <<  " construct" << std::endl;
}

Ponny::~Ponny(void)
{
	std::cout << "Ponny " << this->_name <<  " destruct" << std::endl;
}

void	Ponny::jump(void) const
{
	std::cout << this->_name << " jumps!" << std::endl;
}
