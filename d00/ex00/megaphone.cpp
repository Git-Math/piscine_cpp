// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   megaphone.cpp                                      :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/15 17:19:41 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/15 18:56:07 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>

int		main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] >= 'a' && av[i][j] <= 'z')
				std::cout << char(av[i][j] - 32);
			else
				std::cout << av[i][j];
			j++;
		}
		i++;
	}
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
