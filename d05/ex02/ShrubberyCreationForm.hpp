// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   ShrubberyCreationForm..hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:46:39 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:20:07 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	ShrubberyCreationForm(std::string const &target = "TargetLess");
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm(void);
	ShrubberyCreationForm & operator=(ShrubberyCreationForm const &copy);
	virtual void execute(Bureaucrat const &executor) const;
private:
	std::string _target;
};

#endif
