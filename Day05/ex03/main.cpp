/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/21 02:10:44 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include "iostream"

int	main( void ) {
	Intern someRandomIntern;
	Form* rrf;
	Form* notRRF;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	notRRF = someRandomIntern.makeForm("Weird Form", "Nobody");

	delete rrf;
	delete notRRF;
	
	return (0);
}
