/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:35:17 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 20:47:19 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using std::cout;
using std::endl;

Weapon::Weapon( string type ): _type(type) {
	cout << "Weapon created!" << endl;
}

Weapon::Weapon( void ) {
	cout << "Weapon created!" << endl;
}

Weapon::~Weapon( void ) {
	cout << "Weapon destroyed!" << endl;
}

string&	Weapon::getType( void ) {
	return (_type);
}

void	Weapon::setType( string type ) {
	this->_type = type;
}
