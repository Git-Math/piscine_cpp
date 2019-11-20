// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Enemy.cpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/20 22:20:09 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/20 22:55:36 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Enemy.hpp"

Enemy::Enemy(void)
{
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
}

Enemy::Enemy(Enemy const & copy)
{
    *this = copy;
}

Enemy::~Enemy(void)
{
}

Enemy& Enemy::operator=(Enemy const& copy)
{
    this->_hp = copy.getHP();
    this->_type = copy.getType();
    return *this;
}

std::string const Enemy::getType() const
{
	return this->_type;
}

int Enemy::getHP() const
{
	return this->_hp;
}

void Enemy::takeDamage(int damage)
{
	if (damage > 0)
		this->_hp = this->_hp - damage > 0 ? this->_hp - damage : 0;
}
