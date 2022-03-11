/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:03:54 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:07:58 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ): _name(name), _weapon(weapon) {
	std::cout << "HumanA Created! " << std::endl;
}

HumanA::~HumanA( void ) {
	std::cout << "HumanA Destroyed!" << std::endl;
}

void	HumanA::attack( void ) {
	// NAME attacks with his WEAPON_TYPE
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

std::string const &	HumanA::getName( void ) const {
	return (this->_name);
}

Weapon const &		HumanA::getWeapon( void ) const {
	return (this->_weapon);
}
