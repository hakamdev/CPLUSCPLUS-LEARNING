/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:52 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 23:35:31 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name) {
	std::cout << "Bureaucrat: Constructor called!" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) : _name(copy._name) {
	std::cout << "Bureaucrat: Copy Constructor called!" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator = ( Bureaucrat const & copy ) {
	std::cout << "Bureaucrat: = operator called!" << std::endl;
	this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ) {
	std::cout << "Bureaucrat: Destructor called!" << std::endl;
}

std::string	Bureaucrat::getName( void ) const {
	return (this->_name);
}

int			Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void		Bureaucrat::increment( void ) {
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void		Bureaucrat::decrement( void ) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

void		Bureaucrat::signForm( Form & f ) {
	if (f.isSigned()) {
		std::cout << this->_name
				<< " couldn't sign " << f.getName()
				<< " because: it's already been signed!" << std::endl;
	}
	try {
		f.beSigned(*this);
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->_name
				<< " couldn't sign " << f.getName()
				<< " because: " << e.what() << std::endl;
	}
}

void		Bureaucrat::executeForm(Form const & form) {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	} catch (std::exception& e) {
		std::cout << this->_name << " failed to execute " << form.getName() << " because: " << e.what() << std::endl;
	}
}

std::ostream&	operator << (std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
    return os;
}

// Exceptions Code
Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw () {}
Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw () {}
const char*	Bureaucrat::GradeTooHighException::what () const throw () {
	return ("GradeTooHighException: grade is higher than 1");
}
const char*	Bureaucrat::GradeTooLowException::what () const throw () {
	return ("GradeTooHighException: grade is lower than 150");
}
