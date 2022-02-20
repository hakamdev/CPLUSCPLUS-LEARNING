/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 20:06:04 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/20 23:31:58 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : Form("RobotomyRequestForm", 72, 45), _target(target) {
	std::cout << "RobotomyRequestForm: Constructor called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & copy ) : Form(copy) {
	std::cout << "RobotomyRequestForm: Copy Constructor called!" << std::endl;
	*this = copy;
}

RobotomyRequestForm& RobotomyRequestForm::operator = ( RobotomyRequestForm const & copy ) {
	std::cout << "RobotomyRequestForm: = operator called!" << std::endl;
	this->_target = copy._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ) {
	std::cout << "RobotomyRequestForm: Destructor called!" << std::endl;
}

void	RobotomyRequestForm::beSigned(Bureaucrat const & b) {
	Form::beSigned(b);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	Form::execute(executor);
	std::cout << "** DRILLING NOISES **" << std::endl;
	std::cout << this->_target << " has been robotomized successfully 50% of the time." << std::endl;
}
