/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:35:17 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 18:53:49 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

using std::cout;
using std::endl;

Weapon::Weapon( void ) {
	cout << "Weapon created!" << endl;
}

Weapon::~Weapon( void ) {
	cout << "Weapon destroyed!" << endl;
}

string& const	Weapon::getType( void ) {
	return (type);
}

void			Weapon::setType( string type ) {
	this->type = type;
}