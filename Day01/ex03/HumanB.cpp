/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:25:52 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 21:15:18 by hakamgo          ###   ########.fr       */
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

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

string&	HumanB::name( void ) {
	return (_name);
}
