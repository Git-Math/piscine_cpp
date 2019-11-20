// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Intern.hpp                                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 23:36:37 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:38:52 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef INTERN_HPP

# define INTERN_HPP

# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
public:
	Intern(void);
	Intern(Intern const &copy);
	~Intern(void);
	Intern & operator=(Intern const &copy);
	Form * makeForm(std::string const &name, std::string const &target);
};

#endif
