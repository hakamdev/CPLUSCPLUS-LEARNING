/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:35:17 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:07:31 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type) {
	std::cout << "Weapon created!" << std::endl;
}

Weapon::Weapon( void ) {
	std::cout << "Weapon created!" << std::endl;
}

Weapon::~Weapon( void ) {
	std::cout << "Weapon destroyed!" << std::endl;
}

std::string&	Weapon::getType( void ) {
	return (_type);
}

void	Weapon::setType( std::string type ) {
	this->_type = type;
}
