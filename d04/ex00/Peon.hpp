// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Peon.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 04:38:13 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 04:46:52 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PEON_HPP
# define PEON_HPP

# include<iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
    Peon(void);
    Peon(std::string n);
    Peon(Peon const &copy);
    ~Peon(void);
    virtual void getPolymorphed(void) const;
};

#endif
