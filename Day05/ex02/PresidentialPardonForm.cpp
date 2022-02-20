/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:06:00 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/20 23:31:48 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : Form("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm: Constructor called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & copy ) : Form(copy) {
	std::cout << "PresidentialPardonForm: Copy Constructor called!" << std::endl;
	*this = copy;
}

PresidentialPardonForm& PresidentialPardonForm::operator = ( PresidentialPardonForm const & copy ) {
	std::cout << "PresidentialPardonForm: = operator called!" << std::endl;
	this->_target = copy._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
	std::cout << "PresidentialPardonForm: Destructor called!" << std::endl;
}

void	PresidentialPardonForm::beSigned(Bureaucrat const & b) {
	Form::beSigned(b);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
