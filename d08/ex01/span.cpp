// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/26 23:19:27 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/26 23:36:26 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

Span::Span(void) { return ; }

Span::Span(unsigned int n) : _n(n), _count(0)
{
    return ;
}

Span::Span(Span const &s)
{
    this->_n = s.getN();
    return ;
}

Span::~Span(void) { return; }

Span    &Span::operator=(Span const &s)
{
    this->_n = s.getN();
    return *this;
}

unsigned int    Span::getN(void) const
{
    return this->_n;
}

void    Span::addNumber(int const value)
{
    if (this->_count < this->_n)
    {
        this->_vec.push_back(value);
        ++this->_count;
    }
    return ;
}

int     Span::shortestSpan(void) const
{
    int     diff = INT_MAX;
	std::vector<int>::const_iterator    it;
	std::vector<int>::const_iterator    ita;
	std::vector<int>::const_iterator    ite = this->_vec.end();

    ita = this->_vec.begin();
    ++ita;
    for(it = this->_vec.begin(); it != ite; ++it)
    {
        if (ita != ite)
        {
            if (diff > this->abso(*it, *ita))
                diff = this->abso(*it, *ita);
            ++ita;
        }
    }
    return diff;
}

int     Span::longestSpan(void) const
{
    int     diff = 0;
	std::vector<int>::const_iterator    it;
	std::vector<int>::const_iterator    ita;
	std::vector<int>::const_iterator    ite = this->_vec.end();

    ita = this->_vec.begin();
    ++ita;
    for(it = this->_vec.begin(); it != ite; ++it)
    {
        if (ita != ite)
        {
            if (diff < this->abso(*it, *ita))
                diff = this->abso(*it, *ita);
            ++ita;
        }
    }
    return diff;
}

int     Span::abso(int const a, int const b) const
{
    int c = a - b;

    return (c < 0 ? (-1) * c : c);
}
