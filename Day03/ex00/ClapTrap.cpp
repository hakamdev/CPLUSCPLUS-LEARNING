/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:36:28 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/02 18:41:11 by ehakam           ###   ########.fr       */
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
	cout << "Default Constructor called!" << endl;
}

ClapTrap::ClapTrap( std::string name ): 
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	cout << "Parameterized Constructor called!" << endl;
}

ClapTrap::ClapTrap( ClapTrap& copy ) {
	cout << "Copy Constructor called!" << endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	cout << "Destructor called!" << endl;
}

ClapTrap&	ClapTrap::operator = ( ClapTrap const & copy ) {
	cout << "= operator called!" << endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
}

void		ClapTrap::attack( std::string const & target ) {
	// ClapTrap <name> attack <target>, causing <damage> points of damage!
	cout	<< "ClapTrap " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " point of damage!" << endl;
}

void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints > 0)
		this->_hitPoints -= amount;
	cout	<< "ClapTrap " << this->_name << " took damage: " << amount << ", hp: "
			<< this->_hitPoints << endl;
}

void		ClapTrap::beRepaired( unsigned int amount ) {
	this->_hitPoints += amount;
	cout	<< "ClapTrap " << this->_name << " was repaired with amount: " << amount
			<< ", hp: " << this->_hitPoints << endl;
}
