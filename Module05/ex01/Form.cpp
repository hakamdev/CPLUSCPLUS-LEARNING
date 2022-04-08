/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 18:33:56 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 22:44:57 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

// FORM
Form::Form( std::string name, int signGrade, int execGrade ) :
					_name(name), _signGrade(signGrade), _execGrade(execGrade), _isSigned(false) {
	std::cout << "Form:  Constructor called!" << std::endl;
	if (signGrade > 150 || execGrade > 150)
		throw Form::GradeTooLowException(this->_name);
	else if (signGrade < 1 || execGrade < 1)
		throw Form::GradeTooHighException(this->_name);
}

Form::Form( Form const & copy ) :
					_name(copy._name), _signGrade(copy._signGrade), _execGrade(copy._execGrade) {
	std::cout << "Form: Copy Constructor called!" << std::endl;
	*this = copy;
}

Form& Form::operator = ( Form const & copy ) {
	std::cout << "Form: = operator called!" << std::endl;
	this->_isSigned = copy._isSigned;
	return (*this);
}

Form::~Form( void ) {
	std::cout << "Form: Destructor called!" << std::endl;
}

std::string	Form::getName( void ) const {
	return (this->_name);
}

int		Form::getSignGrade( void ) const {
	return (this->_signGrade);
}

int		Form::getExecGrade( void ) const {
	return (this->_execGrade);
}

bool	Form::isSigned( void ) const {
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat const & b) {
	if (this->_isSigned) {
		std::cout << this->_name << " Form has already signed!" << std::endl;
		return ;
	}
	if (b.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException(this->_name);
	else if (b.getGrade() <= this->_signGrade)
	this->_isSigned = true;
}

std::ostream&	operator << (std::ostream &os, const Form &f)
{
	os << "FORM:		" << f.getName() << std::endl;
	os << "SIGN GRADE:	" << f.getSignGrade() << std::endl;
	os << "EXEC GRADE:	" << f.getExecGrade() << std::endl;
	os << "IS SIGNED:	" << (f.isSigned() ? "Yes" : "No") << std::endl;
	os << "-----------------------";
    return os;
}

// EXCEPTIONS
Form::GradeTooHighException::GradeTooHighException( void ) {}
Form::GradeTooHighException::~GradeTooHighException( void ) throw() {}
Form::GradeTooLowException::GradeTooLowException( void ) {}
Form::GradeTooLowException::~GradeTooLowException( void ) throw() {}
Form::GradeTooHighException::GradeTooHighException( std::string name )
	: _thower_name(name) {}
Form::GradeTooLowException::GradeTooLowException( std::string name )
	: _thower_name(name) {}

const char*	Form::GradeTooHighException::what () const throw () {
	std::string message = std::string("GradeTooHighException:\n") + _thower_name + ": grade too high!";
	return (message.c_str());
}
const char*	Form::GradeTooLowException::what () const throw () {
	std::string message = std::string("GradeTooLowException:\n")  + _thower_name + ": grade too low!";
	return (message.c_str());
}

std::ostream&	operator << (std::ostream &os, const Form::GradeTooLowException &e) {
	os << e.what();
    return os;
}
std::ostream&	operator << (std::ostream &os, const Form::GradeTooHighException &e) {
	os << e.what();
    return os;
}
