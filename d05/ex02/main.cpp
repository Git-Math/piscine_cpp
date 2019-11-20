// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:09:46 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:25:23 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <ctime>

int		main(void)
{

//ex03

	Bureaucrat b1("Max", 1);
	Bureaucrat b2("Dylan", 150);
	PresidentialPardonForm f1("target1");
	RobotomyRequestForm f2("target2");
	ShrubberyCreationForm f3("target3");

	std::cout << f1;
	std::cout << f2;
	std::cout << f3;

	try
	{
		b1.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f1;

	try
	{
		b2.signForm(f1);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f1;

	try
	{
		b1.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f2;

	try
	{
		b2.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f2;

	try
	{
		b1.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f3;

	try
	{
		b2.signForm(f3);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}

	std::cout << f3;

	try
	{
		b2.signForm(f2);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f2;


    try
    {
        b2.executeForm(f1);
        b2.executeForm(f2);
        b2.executeForm(f3);
    }
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
	}
	std::cout << f1;
	std::cout << f2;
	std::cout << f3;

    b1.executeForm(f1);
    b1.executeForm(f2);
    b1.executeForm(f3);
    
	return (0);
}
