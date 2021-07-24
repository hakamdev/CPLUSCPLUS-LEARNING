/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/24 18:55:16 by hakamgo          ###   ########.fr       */
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
		/* 
			This escape sequence clears the terminal window 
			and places the cursor on 1;1 position :)
		*/
		std::cout << "\033[2J\033[1;1H";
		std::cout << "Please, Enter Command: <ADD, SEARCH, EXIT>" << std::endl;
		std::cout << "> ";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			this->addContact();
		else if (command == "SEARCH")
			this->searchContact();
	}
}

void	Phonebook::addContact( void ) {
	std::cout << "Adding Contact...\n";
}

void	Phonebook::searchContact( void ) {
	std::cout << "Searching Contacts...\n";
}