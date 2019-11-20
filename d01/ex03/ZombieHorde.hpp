// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieHorde.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 22:14:49 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 00:26:35 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class ZombieHorde
{
private:
	int _N;
	Zombie* _horde;
public:
	ZombieHorde(int N);
	~ZombieHorde(void);
	void	announce(void) const;
};

#endif
