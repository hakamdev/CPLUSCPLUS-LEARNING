/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/09 00:27:33 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "iostream"

int	main( void ) {

	ShrubberyCreationForm f1("School");
	RobotomyRequestForm f2("John Jack Reseau");
	PresidentialPardonForm f3("Kaney West");
	PresidentialPardonForm f4("[Not Signed]");

	Bureaucrat b1("Bureau1", 1);
	Bureaucrat b3("Bureau3", 140);

	b1.signForm(f1);
	b1.signForm(f2);
	b1.signForm(f3);

	b1.executeForm(f1);
	b1.executeForm(f2);
	b1.executeForm(f3);
	b1.executeForm(f4);

	std::cout << std::endl;

	b3.executeForm(f1);
	b3.executeForm(f2);
	b3.executeForm(f3);
	
	return (0);
}
