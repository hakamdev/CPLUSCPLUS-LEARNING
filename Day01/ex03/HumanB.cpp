/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:25:52 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 20:53:09 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

using std::cout;
using std::endl;

HumanB::HumanB( void ) {
	cout << "HumanB Created! " << endl;
}

HumanB::HumanB( string name ): _name(name) {
	cout << "HumanB Created! " << endl;
}

HumanB::~HumanB( void ) {
	cout << "HumanA Destroyed!" << endl;
}

void	HumanB::attack( void ) {
	// NAME attacks with his WEAPON_TYPE
	cout << _name << " attacks with his " << _weapon->getType() << endl;
}

Weapon*	HumanB::getWeapon( void ) {
	return (_weapon);
}

void	HumanB::setWeapon( Weapon weapon ) {
	this->_weapon = &weapon;
	// cout << "Setter: " << _weapon->getType() << endl;
}

string&	HumanB::name( void ) {
	return (_name);
}