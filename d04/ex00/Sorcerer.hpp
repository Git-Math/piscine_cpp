// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Sorcerer.hpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:02:55 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:19:19 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include "Victim.hpp"
# include "Peon.hpp"

class Sorcerer
{
public:
    Sorcerer(std::string n, std::string t);
    Sorcerer(Sorcerer const &copy);
    ~Sorcerer(void);
    Sorcerer    &operator=(Sorcerer const& copy);
	void polymorph(Victim const& vic) const;
	std::string getName(void) const;
	std::string getTitle(void) const;
protected:
	std::string name;
	std::string title;
private:
	Sorcerer(void);
};

std::ostream& operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
