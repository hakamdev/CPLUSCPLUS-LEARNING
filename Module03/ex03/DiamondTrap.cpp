/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:37:41 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/07 00:26:04 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name") {
	_name = name;
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap::DiamondTrap( DiamondTrap const & copy ) {
	std::cout << "DiamondTrap: Copy Constructor called!" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "DiamondTrap: Destructor called!" << std::endl;
}

DiamondTrap&	DiamondTrap::operator = ( DiamondTrap const & copy ) {
	std::cout << "DiamondTrap: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void			DiamondTrap::attack( std::string const & target ) {
	ScavTrap::attack(target);
}

void			DiamondTrap::whoAmI( void ) {
	std::cout << "Name:     " << DiamondTrap::_name << std::endl;
	std::cout << "ClapName: " << ClapTrap::_name << std::endl << std::endl;
}
