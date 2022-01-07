/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:08 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 03:23:29 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ): 
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << "ClapTrap: Base Class: Default Constructor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): 
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << "ClapTrap: Base Class: Parameterized Constructor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name, int hitPoints, int energyPoints, int attackDamage ): 
		_name(name),
		_hitPoints(hitPoints),
		_energyPoints(energyPoints),
		_attackDamage(attackDamage) {
	std::cout << "ClapTrap: Base Class: Parameterized Constructor called!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) {
	std::cout << "ClapTrap: Base Class: Copy Constructor called!" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap: Base Class: Destructor called!" << std::endl;
}

ClapTrap&	ClapTrap::operator = ( ClapTrap const & copy ) {
	std::cout << "ClapTrap: Base Class: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		ClapTrap::attack( std::string const & target ) {
	std::cout	<< "ClapTrap: Base Class: " << this->_name << " attack " << target
			<< ", causing " << this->_attackDamage << " point of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints > 0)
		this->_hitPoints -= amount;
	std::cout	<< "ClapTrap: Base Class: " << this->_name << " took damage: " << amount << ", hp: "
			<< this->_hitPoints << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount ) {
	this->_hitPoints += amount;
	std::cout	<< "ClapTrap: Base Class: " << this->_name << " was repaired with amount: " << amount
			<< ", hp: " << this->_hitPoints << std::endl;
}
