// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 20:49:52 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 22:56:50 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"

Form::Form(void) : _name("default"), _grade_to_sign(100), _grade_to_exec(50), _signed(false)
{
}

Form::Form(std::string name, int grade_to_sign, int grade_to_exec) :
	_name(name), _grade_to_sign(grade_to_sign), _grade_to_exec(grade_to_exec), _signed(false)
{
	if (this->_grade_to_sign < 1)
		throw Form::GradeTooHighException();
	else if (_grade_to_sign > 150)
		throw Form::GradeTooLowException();
	else if (this->_grade_to_exec < 1)
        throw Form::GradeTooHighException();
    else if (_grade_to_exec > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const & copy) : _name(copy.getName()), _grade_to_sign(copy.getGS()), _grade_to_exec(copy.getGE())
{
	*this = copy;
}

Form::GradeTooHighException::GradeTooHighException(void) throw()
{
}

Form::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy) throw()
{
	*this = copy;
}

Form::GradeTooLowException::GradeTooLowException(void) throw()
{
}

Form::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy) throw()
{
    *this = copy;
}

Form::~Form(void)
{
}

Form::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

Form::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

std::string const Form::getName(void) const
{
	return this->_name;
}

int Form::getGS(void) const
{
	return this->_grade_to_sign;
}

int Form::getGE(void) const
{
	return this->_grade_to_exec;
}

bool Form::getS(void) const
{
	return this->_signed;
}

void Form::beSigned(Bureaucrat const & b)
{
	if (this->_grade_to_sign < b.getGrade())
		throw Form::GradeTooLowException();
	this->_signed = true;
}

Form & Form::operator=(Form const & copy)
{
	this->_signed = copy._signed;
	return *this;
}

Form::GradeTooHighException& Form::GradeTooHighException::operator=(GradeTooHighException const &copy) throw()
{
	static_cast<void>(copy);
	return *this;
}

Form::GradeTooLowException& Form::GradeTooLowException::operator=(GradeTooLowException const &copy) throw()
{
	static_cast<void>(copy);
	return *this;
}

const char * Form::GradeTooHighException::what(void) const throw()
{
	return "Grade is too high";
}

const char * Form::GradeTooLowException::what(void) const throw()
{
	return "Grade is too low";
}

std::ostream & operator<<(std::ostream &o, Form const & rhs)
{
	o << "Form " << rhs.getName() << " signed : " << rhs.getS() << ", grade to sign : " 
	  << rhs.getGS() << ", grade to exec : " << rhs.getGE();
	return o;
}
