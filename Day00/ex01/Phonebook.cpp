/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/24 17:16:38 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) {
	this->currentIndex = 0;
}

Phonebook::~Phonebook( void ) {
	
}

void	Phonebook::run( void ) {
	String command;

	while (true)
	{
		std::cin >> command;
	}
	
}

void	Phonebook::addContact( void ) {
	
}

void	Phonebook::searchContact( void ) {
	
}