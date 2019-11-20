// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:09:46 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 22:40:07 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

int		main(void)
{

//Bureaucrat

	Bureaucrat	*a = new Bureaucrat("Max", 1);
	Bureaucrat  *b = new Bureaucrat("Boris", 50);
	Bureaucrat  *c = new Bureaucrat("Dylan", 150);
	Bureaucrat	*d;
	Bureaucrat	*e;

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
		e = new Bureaucrat("Cyril", 151);
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
		delete e;
	}

	std::cout << *a << std::endl << *b << std::endl << *c << std::endl;

	b->gradeUP();
	std::cout << *b << std::endl;
	b->gradeDOWN();
	std::cout << *b << std::endl;

	try
	{
		a->gradeUP();
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
	}
	std::cout << *a << std::endl;

	try
    {
        c->gradeDOWN();
    }
    catch (std::exception const &err)
    {
		std::cerr << err.what() << std::endl;
    }
	std::cout << *c << std::endl;

//Form

	Form *f0 = new Form("Got CPP Piscine", 7, 6);
	Form *f1 = new Form("Beat Dylan", 3, 3);
	Form *f2 = new Form("Go Eat", 140, 150);
	Form *f3;
	Form *f4;
	Form *f5;
	Form *f6;

	try
    {
		f3 = new Form("Work", 0, 15);
    }
    catch (std::exception const &err)
    {
		std::cerr << err.what() << std::endl;
        delete f3;
    }
    try
    {
        f4 = new Form("Week", 151, 15);
    }
    catch (std::exception const &err)
    {
		std::cerr << err.what() << std::endl;
        delete f4;
    }

	try
	{
		f5 = new Form("Waak", 15, 0);
	}
	catch (std::exception const &err)
	{
		std::cerr << err.what() << std::endl;
		delete f5;
	}
    try
    {
        f6 = new Form("Wuuk", 15, 151);
    }
    catch (std::exception const &err)
    {
		std::cerr << err.what() << std::endl;
        delete f6;
    }
	
	std::cout << *f0 << std::endl << *f1 << std::endl << *f2 << std::endl;

	b->signForm(*f0);
	a->signForm(*f1);
	c->signForm(*f2);

	delete a;
	delete b;
	delete c;
	delete f1;
	return 0;
}
