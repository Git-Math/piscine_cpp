// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   PresidentialPardonForm.hpp                         :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:59:25 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:00:54 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm : public Form
{
public:
	PresidentialPardonForm(std::string const &target = "TargetLess");
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm(void);
	PresidentialPardonForm & operator=(PresidentialPardonForm const &copy);

	virtual void execute(Bureaucrat const &executor) const;

private:
	std::string _target;
};

#endif
