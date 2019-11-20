// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/26 23:20:52 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/26 23:36:16 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "span.hpp"

int     main(void)
{
    Span sp = Span(18);

    sp.addNumber(5);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(42);

	std::cout << "Diff Min : " << sp.shortestSpan() << std::endl;
	std::cout << "Diff Max: " << sp.longestSpan() << std::endl;

    sp.addNumber(100);
    sp.addNumber(100);

	std::cout << "Diff Min : " << sp.shortestSpan() << std::endl;
	std::cout << "Diff Max: " << sp.longestSpan() << std::endl;

    return (0);
}
