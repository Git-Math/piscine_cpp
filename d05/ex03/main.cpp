// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   main.cpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: mnguyen <mnguyen@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/06/23 22:09:46 by mnguyen           #+#    #+#             //
//   Updated: 2015/06/23 23:41:06 by mnguyen          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"
#include <ctime>

int		main(void)
{
    Intern  someRandomIntern;
    Form*   rrf1;
    Form*   rrf2;
    Form*   rrf3;
    
    rrf1 = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender");
    rrf3 = someRandomIntern.makeForm("shrubbery creation", "Bender");

	std::cout << *rrf1;
	std::cout << *rrf2;
	std::cout << *rrf3;    
    
    return (0);
}
