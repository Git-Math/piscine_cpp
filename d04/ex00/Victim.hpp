// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Victim.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:23:53 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 05:06:49 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include<iostream>

class Victim
{
public:
    Victim(void);
    Victim(std::string n);
    Victim(Victim const &copy);
    ~Victim(void);
    Victim    &operator=(Victim const& copy);
	virtual void getPolymorphed(void) const;
	std::string getName(void) const;
protected:
	std::string name;
};

std::ostream& operator<<(std::ostream &o, Victim const &rhs);

#endif
