/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:22 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 18:33:22 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) { 
	std::cout << "Zombie: created!" << std::endl;
 }

Zombie::Zombie( std::string name ): _name(name) {
	std::cout << "Zombie: " << _name << " created!" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie: " << _name << " destroyed!" << std::endl; 
}

void	Zombie::announce( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName( void ) const {
	return (_name);
}

void		Zombie::setName( std::string name ) {
	this->_name = name;
}
