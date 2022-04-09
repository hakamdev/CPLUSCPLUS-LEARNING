/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/09 00:28:53 by ehakam           ###   ########.fr       */
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
	Form* robotomyForm;
	Form* weirdForm;
	robotomyForm = someRandomIntern.makeForm("robotomy request", "Bender");
	weirdForm = someRandomIntern.makeForm("Weird Form", "Nobody");

	delete robotomyForm;
	delete weirdForm;

	return (0);
}
