/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/24 20:48:09 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook( void ) {
	currentIndex = 0;
	numContacts = 0;
}

Phonebook::~Phonebook( void ) {
	
}

void	Phonebook::run( void ) {
	String command;

	while (true)
	{
		std::cout << "Please, Enter Command: <ADD, SEARCH, EXIT>" << std::endl;
		std::cout << "> ";
		std::cin >> command;
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			this->addContact();
		else if (command == "SEARCH")
			this->searchContact();
		else
		/* 
			This escape sequence clears the terminal window 
			and places the cursor on 1;1 position :)
		*/
			std::cout << "\033[2J\033[1;1H";
	}
}

void	Phonebook::printField( std::string field ) {
	if (field.length() <= 10) {
		std::cout << std::setw(10) << field;
	} else {
		std::cout<< field.substr(0, 9) << ".";
	}
}

void	Phonebook::addContact( void ) {
	String	value;

	std::cout << "\033[2J\033[1;1H";
	std::cout << "Adding A New Contact" << std::endl;
	std::cout << "Fist Name: ";
	std::cin >> value;
	this->contacts[this->currentIndex].setFirstName(value);
	std::cout << "Last Name: ";
	std::cin >> value;
	this->contacts[this->currentIndex].setLastName(value);
	std::cout << "Nickname: ";
	std::cin >> value;
	this->contacts[this->currentIndex].setNickname(value);
	std::cout << "Phone Number: ";
	std::cin >> value;
	this->contacts[this->currentIndex].setPhoneNumber(value);
	std::cout << "Darkest Secret: ";
	std::cin >> value;
	this->contacts[this->currentIndex].setDarkestSecret(value);
	if (numContacts < 8)
		numContacts++;
	this->currentIndex = ++this->currentIndex % 8;
	std::cout << "\033[2J\033[1;1H";
	std::cout << "Contact Added Successfully!" << std::endl << std::endl;
}

void	Phonebook::searchContact( void ) {
	int		index = 0;

	std::cout << "List Of Contacts" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (index < numContacts)
	{
		// std::cout << "|    " << index << "     |";
		std::cout << "|";
		std::cout << std::setw(10) << index;
		std::cout << "|";
		printField(contacts[index].getFirstName());
		std::cout << "|";
		printField(contacts[index].getLastName());
		std::cout << "|";
		printField(contacts[index].getNickname());
		std::cout << "|" << std::endl;
		index++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}