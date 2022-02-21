/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:52 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/21 00:27:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name) {
	std::cout << "Bureaucrat:  Constructor called!" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException(this->_name);
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException(this->_name);
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const & copy ) {
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
		throw Bureaucrat::GradeTooHighException(this->_name);
	this->_grade--;
}

void		Bureaucrat::decrement( void ) {
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException(this->_name);
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
Bureaucrat::GradeTooHighException::GradeTooHighException( void ) {}
Bureaucrat::GradeTooHighException::~GradeTooHighException( void ) throw () {}
Bureaucrat::GradeTooLowException::GradeTooLowException( void ) {}
Bureaucrat::GradeTooLowException::~GradeTooLowException( void ) throw () {}
Bureaucrat::GradeTooHighException::GradeTooHighException( std::string name )
	: _thower_name(name) {}
Bureaucrat::GradeTooLowException::GradeTooLowException( std::string name )
	: _thower_name(name) {}

const char*	Bureaucrat::GradeTooHighException::what () const throw () {
	std::string message = std::string("GradeTooHighException:\n")
						+ "My man " + this->_thower_name + " is going too high!";
	return (message.c_str());
}
const char*	Bureaucrat::GradeTooLowException::what () const throw () {
	std::string message = std::string("GradeTooLowException:\n")
						+ "My man " + this->_thower_name + " is going too low!";
	return (message.c_str());
}

std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooLowException &e) {
	os << e.what();
    return os;
}
std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooHighException &e) {
	os << e.what();
    return os;
}
