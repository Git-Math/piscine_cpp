// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 22:20:14 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 23:09:42 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <iostream>

class Enemy
{
private:
	Enemy(void);
	int _hp;
	std::string _type;
public:
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & copy);
	virtual ~Enemy();
	std::string const getType() const;
	int getHP() const;
	virtual void takeDamage(int);
	Enemy& operator=(Enemy const& copy);
};

#endif
