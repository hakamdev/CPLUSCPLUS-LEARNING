/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:22 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 00:57:53 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) { 
	std::cout << "Zombie created!" << std::endl;
 }

Zombie::Zombie( std::string name ): _name(name) {
	std::cout << "Zombie: " << _name << " created!" << std::endl;
}

Zombie::~Zombie( void ) {
	std::cout << "Zombie: " << _name << " destroyed!" << std::endl; 
}

void	Zombie::announce( void ) {
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string&	Zombie::name( void ) {
	return (_name);
}
