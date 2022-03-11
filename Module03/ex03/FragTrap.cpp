/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:55:21 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 05:22:21 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap: Parameterized Constructor called!" << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << "FragTrap: Destructor called!" << std::endl;	
}

FragTrap::FragTrap( FragTrap const & copy ) : ClapTrap(copy) {
	std::cout << "FragTrap: Copy Constructor called!" << std::endl;
	*this = copy;
}

FragTrap&	FragTrap::operator = ( FragTrap const & copy ) {
	std::cout << "FragTrap: = operator called!" << std::endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys( void ) {
	std::cout << "FragTrap: " << _name << " has high fived you!" << std::endl;
}
