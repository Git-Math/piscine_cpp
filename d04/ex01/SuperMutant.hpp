// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   SuperMutan.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 22:57:18 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 22:57:53 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SUPERMUTANT_HPP

# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant(void);
	SuperMutant(SuperMutant const &copy);
	virtual ~SuperMutant(void);
	void takeDamage(int damage);
};

#endif
