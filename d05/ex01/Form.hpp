// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Form.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 20:52:20 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 22:33:12 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
	Form(void);
	Form(std::string name, int grade_to_sign, int grade_to_exec);
	Form(Form const & copy);
	~Form(void);
	std::string const getName(void) const;
	int	getGS(void) const;
	int getGE(void) const;
	bool getS(void) const;
	void beSigned(Bureaucrat const & b);
	Form & operator=(Form const & copy);
	class GradeTooHighException : public std::exception
	{
	public:
		GradeTooHighException(void) throw();
		GradeTooHighException(GradeTooHighException const & copy) throw();
		~GradeTooHighException(void) throw();
		GradeTooHighException & operator=(GradeTooHighException const & copy) throw();
		virtual const char * what(void) const throw();
	};
	class GradeTooLowException : public std::exception
    {
    public:
        GradeTooLowException(void) throw();
		GradeTooLowException(GradeTooLowException const & copy) throw();
        ~GradeTooLowException(void) throw();
		GradeTooLowException & operator=(GradeTooLowException const & copy) throw();
		virtual const char * what(void) const throw();
	};
private:
	std::string const _name;
	int const _grade_to_sign;
	int const _grade_to_exec;
	bool _signed;
};

std::ostream & operator<<(std::ostream &o, Form const & rhs);

#endif
