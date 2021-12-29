/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:25:52 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:03:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( void ) {
	std::cout << "HumanB Created! " << std::endl;
}

HumanB::HumanB( std::string name ): _name(name) {
	std::cout << "HumanB Created! " << std::endl;
}

HumanB::~HumanB( void ) {
	std::cout << "HumanA Destroyed!" << std::endl;
}

void	HumanB::attack( void ) {
	// NAME attacks with his WEAPON_TYPE
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

Weapon*	HumanB::getWeapon( void ) {
	return (_weapon);
}

void	HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

std::string&	HumanB::name( void ) {
	return (_name);
}
