// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   whatever.cpp                                       :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/25 05:34:14 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/25 18:51:48 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template< typename T >
void swap(T & x, T & y)
{
	T swap = x;
	x = y;
	y = swap;
}

template< typename T >
T const & min(T & x, T & y)
{
	return (x < y ? x : y);
}

template< typename T >
T const & max(T & x, T & y)
{
	return (x > y ? x : y);
}

int main( void ) {
	int a = 2;
	int b = 3;
	std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "After swap: a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Before swap: c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "After swap: c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	double e = 42.4242;
	double f = 21.2121;
	std::cout << "Before swap: e = " << e << ", f = " << f << std::endl;
    ::swap< double >(e, f);
	std::cout << "After swap: e = " << e << ", f = " << f << std::endl;
	std::cout << "min( e, f ) = " << ::min < double >( e, f ) << std::endl;
	std::cout << "max( e, f ) = " << ::max < double >( e, f ) << std::endl;
	return 0;
}
