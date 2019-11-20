// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.cpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:50:37 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:06:27 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string const &target) :
	Form("RobotomyRequestForm", 72, 45), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy) : 
	Form("RobotomyRequestForm", 72, 45)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());
	std::cout << " * drilling noise * Robotomy on " << this->_target 
			  << (rand() % 2 ? ": Success." : ": Fail.") << std::endl;
}
