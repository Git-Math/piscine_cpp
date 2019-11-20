// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   RobotomyRequestForm.hpp                            :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:50:36 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 22:53:25 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(std::string const &target = "TargetLess");
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm(void);
	RobotomyRequestForm & operator=(RobotomyRequestForm const &copy);
	virtual void execute(Bureaucrat const &executor) const;
private:
	std::string _target;
};

#endif
