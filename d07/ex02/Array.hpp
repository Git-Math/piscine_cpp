// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Array.hpp                                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/25 18:10:05 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/25 18:10:06 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <stdexcept>
#include <iostream>

template< typename T>
class Array
{
public:
	Array(void) : _array(new T[0]), _len(0) {}
	Array(unsigned int n) : _array(new T[n]), _len(n) {}
	Array(Array const & copy) {*this = copy;}
	~Array(void) {delete[] this->_array;}
	Array & operator=(Array const & copy)
	{
		delete[] this->_array;

		this->_array = new T[copy._len];
		this->_len = copy._len;

		for (unsigned int i = 0; i < this->_len; i++)
			this->_array[i] = copy._array[i];

		return *this;
	}
	T & operator[](unsigned int i)
	{
		if (i >= this->_len)
			throw std::runtime_error("Out of limits");
		return this->_array[i];
	}
	unsigned int size(void) {return this->_len;}
private:
	T * _array;
	unsigned int _len;
};
