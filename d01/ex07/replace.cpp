// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   replace.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/17 19:05:13 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/17 20:02:15 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include <iostream>
#include <fstream>

void	replace(std::string filename, std::string const s1, std::string const s2)
{
	if (!filename.length() || !s1.length() || !s2.length())
	{
		std::cout << "error, arg can't be empty" << std::endl;
		return;
	}
	std::ifstream ifs(filename.c_str());
	if (!ifs)
    {
		std::cout << "error, could not open file" << std::endl;
        return;
    }
	filename += ".replace";
	std::ofstream ofs(filename.c_str());
	if (!ofs)
	{
		std::cout << "error, could not create file" << std::endl;
		return;
	}
	size_t i;
	while (getline(ifs, filename))    
	{
        i = 0;
        while ((i = filename.find(s1, i)) != std::string::npos)
        {
            filename.replace(i, s1.length(), s2);
            i += s2.length();
        }
		ofs << filename << std::endl;
	}
}

int		main(int ac, char **av)
{
	if (ac != 4)
		std::cout << "error, 3 arguments needed" << std::endl;
	else
		replace(av[1], av[2], av[3]);
	return 0;
}
