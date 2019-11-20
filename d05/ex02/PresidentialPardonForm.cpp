// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.cpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:59:27 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:02:14 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) :
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy) : 
	Form("PresidentialPardonForm", 25, 5)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
}

PresidentialPardonForm & PresidentialPardonForm::operator=(PresidentialPardonForm const &copy)
{
	Form::operator=(copy);
	this->_target = copy._target;
	return *this;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->checkExec(executor.getGrade());
	std::cout << this->_target 
			  << " has been pardoned by Zafod Beeblebrox." << std::endl;
}
