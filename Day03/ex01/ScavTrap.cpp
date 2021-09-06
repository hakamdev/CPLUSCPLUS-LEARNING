/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:11 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/06 19:06:03 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

ScavTrap::ScavTrap( void ) : ClapTrap() {
	cout << "ScavTrap: Default Constructor called!" << endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	cout << "ScavTrap: Parameterized Constructor called!" << endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) {
	cout << "ScavTrap: Copy Constructor called!" << endl;
	*this = copy;
}

ScavTrap::~ScavTrap( void ) {
	cout << "ScavTrap: Destructor called!" << endl;		
}

ScavTrap&	ScavTrap::operator = ( ScavTrap const & copy ) {
	cout << "ScavTrap: = operator called!" << endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		ScavTrap::guardGate( void ) {
	cout << "ScavTrap: " << _name << " has entered Gate Keeper Mode!" << endl;
}
