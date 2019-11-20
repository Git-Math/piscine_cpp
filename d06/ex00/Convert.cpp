// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Convert.cpp                                        :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/24 05:37:01 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/24 20:41:21 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Convert.hpp"

Convert::Convert(void)
{
}

Convert::Convert(Convert const & copy)
{
	*this = copy;
}

Convert::~Convert(void)
{
}

Convert & Convert::operator=(Convert const & copy)
{
	static_cast<void>(copy);
	return *this;
}

void	 Convert::conv(char * s) const
{
	bool point = false;
	bool f = false;
	int i = 0;
	std::string str = s;
	while (s[i])
	{
		if (s[i] == '.')
			point = true;
		if (s[i] == 'f')
			f = true;
		i++;
	}
	if (str == "nan" || str == "nanf")
		this->cast(strtof("nanf", 0), true);
	else if (str == "-inf" || str == "-inff")
		this->cast(strtof("-inff", 0), true);
	else if (str == "+inf" || str == "+inff")
		this->cast(strtof("inff", 0), true);
	else if (*s == '\'')
		this->cast(*(s + 1));
	else if (f && point)
	{	
		try
		{
			this->cast(std::stof(s), false);
		}		
		catch (std::exception & err)
		{			
			this->imp();
		}
	}
	else if (point)
	{
		try
		{
			this->cast(std::stod(s));
		}
		catch (std::exception & err)
		{		
			this->imp();
		}
	}
	else if (atoi(s))
	{
		try
		{			
			this->cast(std::stoi(s));
		}
		catch(std::exception & err)
		{		
			this->imp();
		}
	}
	else if (*s == '0')
		this->cast(0);
	else
		this->cast(*s);
}

void	 Convert::cast(char c) const
{
	if (c >= ' ' && c <= '~')
		std::cout << "char: '" << c << "'" << std::endl;
	else
		std::cout << "char: Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void	 Convert::cast(int i) const
{
	if (i >= 32 && i <= 126)
		std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
	else if (i >= CHAR_MIN && i <= CHAR_MAX)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	std::cout << "int: " << i << std::endl;
	if (i < 1000000)
	{
		std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(i) << std::endl;
    }
}

void	 Convert::cast(float f, bool b) const
{
	if (f >= 32 && f < 127)
		std::cout << "char: '" << static_cast<char>(f) << "'" << std::endl;
	else if (f >= CHAR_MIN && f <= CHAR_MAX)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (b || static_cast<long int>(f) != static_cast<int>(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	if (f - static_cast<int>(f) == 0 && f < 1000000.0f)
	{
		std::cout << "float: " << f << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << f << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
}

void	 Convert::cast(double d) const
{
	if (d >= 32 && d < 127)
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
	else if (d >= CHAR_MIN && d <= CHAR_MAX)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: impossible" << std::endl;
	if (static_cast<long int>(d) != static_cast<int>(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	if (d - static_cast<int>(d) == 0 && d < 1000000.0)
	{
		std::cout << "float: " << static_cast<float>(d) << ".0f" << std::endl;
		std::cout << "double: " << d << ".0" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
		std::cout << "double: " << d << std::endl;
	}
}

void Convert::imp(void) const
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
}
