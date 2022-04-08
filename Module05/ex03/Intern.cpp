/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 00:37:45 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 21:49:27 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include <iostream>

typedef Form *(Intern::*formMaker)( std::string );

Intern::Intern( void ) {
	std::cout << "Intern: Constructor called!" << std::endl;
}

Intern::~Intern( void ) {
	std::cout << "Intern: Destructor called!" << std::endl;
}

static int	indexOf(std::string array[], size_t arraySize, std::string element) {
	for (size_t i = 0; i < arraySize; i++) {
		if (array[i] == element) {
			return (i);
		}
	}
	return (-1);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget) {
	formMaker makers[3] = { &Intern::makeShrubberyForm, &Intern::makePresidentialForm, &Intern::makeRobotomyForm };
	std::string names[3] = { "shrubbery", "presidential pardon", "robotomy request" };
	int makerIndex = indexOf(names, 3, formName);
	if (makerIndex != -1) {
		std::cout << "Intern creates " << formName << std::endl;
		return (this->*makers[makerIndex])(formTarget);
	}
	std::cout << "Form name <<" << formName << ">> is not recongnized!" << std::endl;
	return (NULL);
}

Form	*Intern::makeShrubberyForm( std::string formTarget) {
	return new ShrubberyCreationForm(formTarget);
}

Form	*Intern::makePresidentialForm( std::string formTarget) {
	return new PresidentialPardonForm(formTarget);
}

Form	*Intern::makeRobotomyForm( std::string formTarget) {
	return new RobotomyRequestForm(formTarget);
}
