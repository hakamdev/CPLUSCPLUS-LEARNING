/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:52 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 19:23:39 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( std::string const name, int grade ) : _name(name) {
	std::cout << "Bureaucrat: Custom Constructor called!" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat& const copy ) {
	std::cout << "Bureaucrat: Copy Constructor called!" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator = ( Bureaucrat& const copy ) {
	std::cout << "Bureaucrat: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_grade = copy._grade;
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

const char*	Bureaucrat::GradeTooHighException::what () const throw () {
	return ("GradeTooHighException: grade is too high for range (1-150)");
}

const char*	Bureaucrat::GradeTooLowException::what () const throw () {
	return ("GradeTooLowException: grade is too low for range (1-150)");
}

std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooLowException &e)
{
	os << e.what();
    return os;
}

std::ostream&	operator << (std::ostream &os, const Bureaucrat::GradeTooHighException &e)
{
	os << e.what();
    return os;
}