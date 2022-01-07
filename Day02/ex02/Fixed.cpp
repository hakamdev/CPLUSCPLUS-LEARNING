/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 02:58:10 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 02:43:21 by ehakam           ###   ########.fr       */
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
	_value = roundf(value * (1 << _precision));
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
	return ((float)_value / (float)(1 << _precision));
}

int		Fixed::toInt( void ) const {
	return (_value >> _precision);
}

bool	Fixed::operator == ( Fixed const & other ) const {
	return (_value == other._value);
}

bool	Fixed::operator != ( Fixed const & other ) const {
	return (_value != other._value);
}

bool	Fixed::operator < ( Fixed const & other ) const {
	return (_value < other._value);
}

bool	Fixed::operator > ( Fixed const & other ) const {
	return (_value > other._value);
}

bool	Fixed::operator <= ( Fixed const & other ) const {
	return (_value <= other._value);
}

bool	Fixed::operator >= ( Fixed const & other ) const {
	return (_value >= other._value);
}

Fixed	Fixed::operator + ( Fixed const & other ) {
	Fixed fx;
	fx.setRawBits(_value + other._value);
	return (fx);
}

Fixed	Fixed::operator - ( Fixed const & other ) {
	Fixed fx;
	fx.setRawBits(_value - other._value);
	return (fx);
}

Fixed	Fixed::operator * ( Fixed const & other ) {
	Fixed fx;
	fx.setRawBits((_value * other._value) / (1 << _precision));
	return (fx);
}

Fixed	Fixed::operator / ( Fixed const & other ) {
	Fixed fx;
	fx.setRawBits((_value * (1 << _precision)) / (other._value));
	return (fx);
}

Fixed&	Fixed::operator ++ () {
	_value++;
	return (*this);
}

Fixed	Fixed::operator ++ (int) {
	Fixed fx(*this);
	_value++;
	return (fx);
}

Fixed&	Fixed::operator -- () {
	_value--;
	return (*this);
}

Fixed	Fixed::operator -- (int) {
	Fixed fx(*this);
	_value--;
	return (fx);
}

Fixed const &	Fixed::min( Fixed const & f1, Fixed const & f2 ) {
	return (f1 > f2) ? f2 : f1;
}

Fixed const &	Fixed::max( Fixed const & f1, Fixed const & f2 ) {
	return (f1 < f2) ? f2 : f1;
}


std::ostream&	operator << (std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
    return os;
}
