// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Human.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 02:33:39 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 03:47:44 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human
{
private:
	Brain const _brain;

public:
	Human(void);
	~Human(void);
	std::string		identify(void) const;
	Brain const&		getBrain(void) const;
};

#endif
