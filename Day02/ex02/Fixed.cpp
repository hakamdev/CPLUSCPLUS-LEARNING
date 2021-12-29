/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 02:58:10 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/29 03:33:41 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) {
	_value = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const & copy ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed( int value ) {
	_value = value << _precision;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( float value ) {
	_value = value * (float)(1 << _precision);
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator = ( Fixed const & copy ) {
	std::cout << "Assignation operator called" << std::endl;
	this->_value = copy._value;
	return (*this);
}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void	Fixed::setRawBits( int const raw ) {
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}

float	Fixed::toFloat( void ) const {
	return (float)_value / (float)(1 << _precision);
}

int		Fixed::toInt( void ) const {
	return _value >> _precision;
}

bool	Fixed::operator == ( Fixed const & other ) {
	return (_value == other._value);
}

bool	Fixed::operator != ( Fixed const & other ) {
	return (_value != other._value);
}

bool	Fixed::operator < ( Fixed const & other ) {
	return (_value < other._value);
}

bool	Fixed::operator > ( Fixed const & other ) {
	return (_value > other._value);
}

bool	Fixed::operator <= ( Fixed const & other ) {
	return (_value <= other._value);
}

bool	Fixed::operator >= ( Fixed const & other ) {
	return (_value >= other._value);
}

Fixed&	Fixed::operator + ( Fixed const & other ) {
	return (this->toFloat() + other.toFloat());
}

Fixed&	Fixed::operator - ( Fixed const & other ) {
	return (this->toFloat() - other.toFloat());
}

Fixed&	Fixed::operator * ( Fixed const & other ) {
	return (this->toFloat() * other.toFloat());
}

Fixed&	Fixed::operator / ( Fixed const & other ) {
	return (this->toFloat() / other.toFloat());
}

Fixed&	Fixed::operator ++ () {
	
}

Fixed&	Fixed::operator ++ (int) {
	
}


std::ostream&	operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
    return os;
}
