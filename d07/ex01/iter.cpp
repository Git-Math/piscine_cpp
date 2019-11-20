// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   iter.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/25 05:34:05 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/25 20:39:26 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

template< typename T>
void	iter(T * tab, unsigned int const size, void (*f)(T const &))
{
	unsigned int i = 0;

	while (i++ < size)
		(*f)(tab[i - 1]);
}

template< typename T>
void	afft(T const & x)
{
	std::cout << x  << std::endl;
}

void	aff(int const & x)
{
	std::cout << x << std::endl;
}

int     main(void)
{
    int     tab1[] = {-42, 0, 42};
	::iter(tab1, 3, aff);
	std::cout << std::endl;

    char    tab2[] = {'R', 'o', 'y'};
    ::iter(tab2, 3, afft);
	std::cout << std::endl;

    float   tab3[] = {42.4242f, 84.8484f, 21.2121f};
    ::iter(tab3, 3, afft);

    return (0);
}
