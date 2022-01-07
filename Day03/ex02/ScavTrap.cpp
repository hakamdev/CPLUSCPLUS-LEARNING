/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:11 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 03:24:44 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << "ScavTrap: Default Constructor called!" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
	std::cout << "ScavTrap: Parameterized Constructor called!" << std::endl;
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap( ScavTrap const & copy ) {
	std::cout << "ScavTrap: Copy Constructor called!" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "ScavTrap: Destructor called!" << std::endl;		
}

ScavTrap&	ScavTrap::operator = ( ScavTrap const & copy ) {
	std::cout << "ScavTrap: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap: " << _name << " has entered Gate Keeper Mode!" << std::endl;
}
