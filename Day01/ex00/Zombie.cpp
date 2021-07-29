/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:25:27 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 15:15:09 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie( void ) { 
	cout << "Zombie created!" << endl;
 }

Zombie::Zombie( string name ): name(name) {
	cout << "Zombie: " << name << " created!" << endl;
}

Zombie::~Zombie( void ) {
	cout << "Zombie: " << name << " destroyed!" << endl; 
}

void	Zombie::announce( void ) {
	cout << name << " BraiiiiiiinnnzzzZ..." << endl;
}

string	Zombie::getName( void ) {
	return (name);
}

void	Zombie::setName( string name ) {
	this->name = name;
}



