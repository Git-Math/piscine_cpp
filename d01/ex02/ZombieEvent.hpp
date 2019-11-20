// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ZombieEvent.hpp                                    :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 01:38:46 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:48:15 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <iostream>
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
private:
    std::string _type;


public:
    ZombieEvent(void);
    void    setZombieType(std::string type);
    Zombie* newZombie(std::string name);
};

#endif
