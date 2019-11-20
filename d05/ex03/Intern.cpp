// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.cpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 23:37:05 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:38:13 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Intern.hpp"

Intern::Intern(void)
{
}

Intern::Intern(Intern const &copy)
{
	*this = copy;
}

Intern::~Intern(void)
{
}

Intern & Intern::operator=(Intern const &copy)
{
	static_cast<void>(copy);

	return *this;
}

Form * Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *form;

	if (name == "robotomy request")
		form = new RobotomyRequestForm(target);
	else if (name == "presidential pardon")
		form = new PresidentialPardonForm(target);
	else if (name == "shrubbery creation")
		form = new ShrubberyCreationForm(target);
	else
		form = NULL;
	if (form)
		std::cout << "Intern creates " << form->getName() << "." << std::endl;
	else
		std::cout << "Intern creatation failed." << std::endl;
	return form;
}
