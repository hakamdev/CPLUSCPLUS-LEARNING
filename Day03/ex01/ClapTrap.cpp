/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:08 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/06 18:27:08 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

ClapTrap::ClapTrap( void ): 
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	cout << "ClapTrap: Base Class: Default Constructor called!" << endl;
}

ClapTrap::ClapTrap( std::string name ): 
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	cout << "ClapTrap: Base Class: Parameterized Constructor called!" << endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) {
	cout << "ClapTrap: Base Class: Copy Constructor called!" << endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	cout << "ClapTrap: Base Class: Destructor called!" << endl;
}

ClapTrap&	ClapTrap::operator = ( ClapTrap const & copy ) {
	cout << "ClapTrap: Base Class: = operator called!" << endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		ClapTrap::attack( std::string const & target ) {
	cout	<< "ClapTrap: Base Class: " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " point of damage!" << endl;
}

void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints > 0)
		this->_hitPoints -= amount;
	cout	<< "ClapTrap: Base Class: " << this->_name << " took damage: " << amount << ", hp: "
			<< this->_hitPoints << endl;
}

void		ClapTrap::beRepaired( unsigned int amount ) {
	this->_hitPoints += amount;
	cout	<< "ClapTrap: Base Class: " << this->_name << " was repaired with amount: " << amount
			<< ", hp: " << this->_hitPoints << endl;
}
