// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:08:21 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 22:39:32 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

int		main(void)
{
	Bureaucrat	a = Bureaucrat("Max", 1);
	Bureaucrat  *b = new Bureaucrat("Boris", 50);
	Bureaucrat  *c = new Bureaucrat("Dylan", 150);
	Bureaucrat	*d;
	Bureaucrat	e;

	try
	{
		d = new Bureaucrat("Cyril", 0);
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
		delete d;
	}
	try
	{
		e = Bureaucrat("Cyril", 151);
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
		e.~Bureaucrat();
	}

	std::cout << a << std::endl << *b << std::endl << *c << std::endl;

	b->gradeUP();
	std::cout << *b << std::endl;
	b->gradeDOWN();
	std::cout << *b << std::endl;

	try
	{
		a.gradeUP();
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
	}
	std::cout << a << std::endl;

	try
    {
        c->gradeDOWN();
    }
    catch (std::exception const &err)
    {
		std::cerr << err.what() << std::endl;
    }
	std::cout << *c << std::endl;
	return 0;
}
