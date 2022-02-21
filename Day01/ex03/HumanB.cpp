/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:25:52 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:16:19 by ehakam           ###   ########.fr       */
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

void				HumanB::attack( void ) {
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}

Weapon const &		HumanB::getWeapon( void ) const {
	return (*this->_weapon);
}

void				HumanB::setWeapon( Weapon& weapon ) {
	this->_weapon = &weapon;
}

std::string const &	HumanB::getName( void ) const {
	return (this->_name);
}
