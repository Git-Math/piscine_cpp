// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Zombie.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/16 16:08:51 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 00:36:04 by mnguyen          ###   ########.fr       //
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

    std::string _name;
	std::string _type;

public:
	Zombie(void);
	~Zombie(void);
    void     announce(void) const;
	void	setname(std::string name);
	void	settype(std::string type);
};

#endif
