// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Bureaucrat.hpp                                     :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 18:48:23 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:33:40 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & copy);
	~Bureaucrat(void);
	std::string const getName(void) const;
	int		 getGrade(void) const;
	void	 gradeUP(void);
	void	 gradeDOWN(void);
	Bureaucrat & operator=(Bureaucrat const & copy);
	void signForm(Form & f) const;
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
	int		 _grade;
};

std::ostream & operator<<(std::ostream &o, Bureaucrat const & rhs);

#endif
