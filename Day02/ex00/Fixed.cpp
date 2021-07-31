/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:38:02 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/31 02:08:11 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

using std::cout;
using std::endl;

Fixed::Fixed( void ) {
	_value = 0;
	cout << "Default constructor called" << endl;
}

Fixed::Fixed( Fixed& copy ) {
	cout << "Copy constructor called" << endl;
	*this = copy;
}

Fixed::~Fixed( void ) {
	cout << "Destructor called" << endl;
}

Fixed&	Fixed::operator = ( Fixed const & copy ) {
	cout << "Assignation operator called" << endl;
	this->_value = copy.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	cout << "getRawBits member function called" << endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	cout << "setRawBits member function called" << endl;
	_value = raw;
}
