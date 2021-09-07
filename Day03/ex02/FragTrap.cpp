/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:55:21 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/07 16:33:33 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

FragTrap::FragTrap( void ) : ClapTrap() {
	cout << "FragTrap: Default Constructor called!" << endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30) {
	cout << "FragTrap: Parameterized Constructor called!" << endl;
}

FragTrap::~FragTrap( void ) {
	cout << "FragTrap: Destructor called!" << endl;	
}

FragTrap::FragTrap( FragTrap const & copy ) {
	cout << "FragTrap: Copy Constructor called!" << endl;
	*this = copy;
}

FragTrap&	FragTrap::operator = ( FragTrap const & copy ) {
	cout << "FragTrap: = operator called!" << endl;
	this->_name = copy._name;
	this->_hitPoints = copy._hitPoints;
	this->_energyPoints = copy._energyPoints;
	this->_attackDamage = copy._attackDamage;
	return (*this);
}

void		FragTrap::highFivesGuys( void ) {
	cout << "FragTrap: " << _name << " has high fived you!" << endl;
}
