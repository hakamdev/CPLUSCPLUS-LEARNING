/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:03:54 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 20:47:09 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

using std::cout;
using std::endl;

HumanA::HumanA( string name, Weapon& weapon ): _name(name), _weapon(weapon){
	cout << "HumanA Created! " << endl;
}

HumanA::~HumanA( void ) {
	cout << "HumanA Destroyed!" << endl;
}

void	HumanA::attack( void ) {
	// NAME attacks with his WEAPON_TYPE
	cout << _name << " attacks with his " << _weapon.getType() << endl;
}

string&	HumanA::getName( void ) {
	return (_name);
}

Weapon&	HumanA::getWeapon( void ) {
	return (_weapon);
}
