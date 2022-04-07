/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:08 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/06 23:38:29 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) :
		_name(""),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << "ClapTrap: Default Constructor called!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ): 
		_name(name),
		_hitPoints(10),
		_energyPoints(10),
		_attackDamage(0) {
	std::cout << "ClapTrap: Constructor called!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy ) {
	std::cout << "ClapTrap: Copy Constructor called!" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "ClapTrap: Destructor called!" << std::endl;
}

ClapTrap&	ClapTrap::operator = ( ClapTrap const & copy ) {
	std::cout << "ClapTrap: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		ClapTrap::attack( const std::string & target ) {
	if (this->_energyPoints == 0 || this->_hitPoints == 0) return;
	this->_energyPoints--;
	std::cout	<< "ClapTrap " << this->_name << " attacks " << target
			<< ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void		ClapTrap::takeDamage( unsigned int amount ) {
	if (this->_hitPoints == 0) return;
	this->_hitPoints = (unsigned int)this->_hitPoints > amount ? this->_hitPoints - amount : 0;
	std::cout	<< "ClapTrap " << this->_name << " took damage: " << amount << ", hp: "
			<< this->_hitPoints << std::endl;
}

void		ClapTrap::beRepaired( unsigned int amount ) {
	if (this->_energyPoints == 0 || this->_hitPoints == 0) return;
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout	<< "ClapTrap " << this->_name << " was repaired with amount: " << amount
			<< ", hp: " << this->_hitPoints << std::endl;
}
