/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:03:54 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:02:06 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon){
	std::cout << "HumanA Created! " << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA Destroyed!" << std::endl;
}

void	HumanA::attack( void ) {
	// NAME attacks with his WEAPON_TYPE
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

std::string&	HumanA::getName( void ) {
	return (_name);
}

Weapon&	HumanA::getWeapon( void ) {
	return (_weapon);
}
