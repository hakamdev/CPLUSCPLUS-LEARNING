/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:22 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 17:56:40 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie::Zombie( void ) { 
	cout << "Zombie created!" << endl;
 }

Zombie::Zombie( string name ): _name(name) {
	cout << "Zombie: " << _name << " created!" << endl;
}

Zombie::~Zombie( void ) {
	cout << "Zombie: " << _name << " destroyed!" << endl; 
}

void	Zombie::announce( void ) {
	cout << _name << " BraiiiiiiinnnzzzZ..." << endl;
}

string&	Zombie::name( void ) {
	return (_name);
}
