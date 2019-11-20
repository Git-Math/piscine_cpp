// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ex04.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 01:00:36 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:23:12 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(void)
{
	std::string s = "HI THIS IS BRAIN";
	std::string* p = &s;
	std::string& r = s;
	std::cout	<< "pointer p display : " << *p << std::endl
				<< "reference r display : " << r << std::endl;
	return (0);
}
