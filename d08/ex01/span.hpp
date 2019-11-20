// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   span.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/26 03:01:21 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/26 23:36:37 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <cmath>

class   Span
{
private:
	std::vector<int> _vec;
    unsigned int    _n;
    unsigned int    _count;
    Span(void);

public:
    Span(unsigned int n);
    Span(Span const &copy);
    ~Span(void);
    Span    &operator=(Span const &copy);

    unsigned int    getN(void) const;

    void    addNumber(int const value);
    int     shortestSpan(void) const;
    int     longestSpan(void) const;
    int     abso(int const a, int const b) const;
};
#endif
