// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:46:37 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:06:02 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) :
	Form("ShrubberyCreationForm", 145, 137), _target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy) : 
	Form("ShrubberyCreationForm", 145, 137)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(ShrubberyCreationForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());
	std::ofstream   wStream(this->_target.c_str());
    if (!wStream)
    {
		std::cerr << "Error: could not open file." << std::endl;
        return ;
    }
	wStream << "This is a tiny ascii tree with two branches : Y" << std::endl
            << "Proof I'm not so lazzy, here another one : T" << std::endl;
}
