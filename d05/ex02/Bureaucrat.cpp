// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.cpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 18:25:47 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:31:06 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("default"), _grade(150)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade) :
	_name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & copy) : _name(copy.getName())
{
	*this = copy;
}

Bureaucrat::GradeTooHighException::GradeTooHighException(void) throw()
{
}

Bureaucrat::GradeTooHighException::GradeTooHighException(GradeTooHighException const & copy) throw()
{
	*this = copy;
}

Bureaucrat::GradeTooLowException::GradeTooLowException(void) throw()
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException(GradeTooLowException const & copy) throw()
{
    *this = copy;
}

Bureaucrat::~Bureaucrat(void)
{
}

Bureaucrat::GradeTooHighException::~GradeTooHighException(void) throw()
{
}

Bureaucrat::GradeTooLowException::~GradeTooLowException(void) throw()
{
}

std::string const Bureaucrat::getName(void) const
{
	return this->_name;
}

int		 Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void	 Bureaucrat::gradeUP(void)
{
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	 Bureaucrat::gradeDOWN(void)
{
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

void	Bureaucrat::signForm(Form & f) const
{
	try
	{
		f.beSigned(*this);
		std::cout << this->_name << " signs " << f.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " cannot sign " << f.getName()
				  << " because: "<< e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(Form const & form) const
{
	try
	{
		form.execute(*this);
		std::cout << this->_name << " executes " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << this->_name << " failed executing "
				  << form.getName() << ": " << e.what() << std::endl;
	}

}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & copy)
{
	this->_grade = copy._grade;
	return *this;
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(GradeTooHighException const &copy) throw()
{
	static_cast<void>(copy);
	return *this;
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(GradeTooLowException const &copy) throw()
{
	static_cast<void>(copy);
	return *this;
}

const char * Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade must be > 0";
}

const char * Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade must be <= 150";
}

std::ostream & operator<<(std::ostream &o, Bureaucrat const & rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return o;
}
