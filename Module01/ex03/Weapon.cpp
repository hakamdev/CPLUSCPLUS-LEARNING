/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:35:17 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:56:55 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type) {
	std::cout << "Weapon: " << this->_type << " created!" << std::endl;
}

Weapon::Weapon( Weapon const & copy ) {
	this->_type = copy._type;
	std::cout << "Weapon: " << this->_type << " Copied!" << std::endl;
}

Weapon::Weapon( void ) {
	std::cout << "Weapon: created!" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon: " << this->_type << " destroyed!" << std::endl;
}

std::string const &	Weapon::getType( void ) const {
	return (this->_type);
}

void				Weapon::setType( std::string type ) {
	this->_type = type;
}
