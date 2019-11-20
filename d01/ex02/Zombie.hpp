// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 16:08:51 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 01:40:55 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <ctime>

class Zombie
{
private:

    const std::string _name;
    const std::string _type;

public:
	Zombie(std::string name, std::string type);
	~Zombie(void);
    void     announce(void) const;
};

#endif
