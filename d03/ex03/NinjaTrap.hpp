// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   NinjaTrap.hpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/19 22:41:52 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/19 23:23:19 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"


class NinjaTrap : public ClapTrap
{
public:
    NinjaTrap(void);
    NinjaTrap(std::string n);
    NinjaTrap(NinjaTrap const &copy);
    ~NinjaTrap(void);
    void    rangedAttack(NinjaTrap & target) const;
    void    rangedAttack(FragTrap & target) const;
	void    rangedAttack(ScavTrap & target) const;
	void    meleeAttack(NinjaTrap & target) const;
	void    meleeAttack(FragTrap & target) const;
	void    meleeAttack(ScavTrap & target) const;
	void	ninjaShoebox(NinjaTrap & target) const;
	void    ninjaShoebox(FragTrap & target) const;
	void    ninjaShoebox(ScavTrap & target) const;
};

#endif
