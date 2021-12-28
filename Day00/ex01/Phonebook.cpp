/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/27 20:27:49 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	clearTerminal() {
	/* 
		This escape sequence clears the terminal window 
		and places the cursor on 1;1 position :)
	*/
	std::cout << "\033[2J\033[1;1H";
}

Phonebook::Phonebook( void ) {
	currentIndex = 0;
	numContacts = 0;
}

Phonebook::~Phonebook( void ) {
	
}

void	Phonebook::run( void ) {
	std::string command;

	while (true)
	{
		std::cout << "Please, Enter Command: <ADD, SEARCH, EXIT>" << std::endl;
		std::cout << "> ";
		getline(std::cin, command);
		if (command == "EXIT")
			break ;
		else if (command == "ADD")
			this->addContact();
		else if (command == "SEARCH")
			this->searchContact();
		else
			clearTerminal();
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
	std::string	value;

	clearTerminal();
	std::cout << "Adding A New Contact" << std::endl;

	std::cout << "Fist Name: ";
	getline(std::cin, value);
	this->contacts[this->currentIndex].setFirstName(value);

	std::cout << "Last Name: ";
	getline(std::cin, value);
	this->contacts[this->currentIndex].setLastName(value);

	std::cout << "Nickname: ";
	getline(std::cin, value);
	this->contacts[this->currentIndex].setNickname(value);

	std::cout << "Phone Number: ";
	getline(std::cin, value);
	this->contacts[this->currentIndex].setPhoneNumber(value);

	std::cout << "Darkest Secret: ";
	getline(std::cin, value);
	this->contacts[this->currentIndex].setDarkestSecret(value);

	if (numContacts < 8)
		numContacts++;
	this->currentIndex = ++this->currentIndex % 8;
	clearTerminal();
	std::cout << "Contact Added Successfully!" << std::endl << std::endl;
}

bool	checkIndex(std::string index) {
	unsigned long i = 0;

	while (index[i] == ' ') i++;
	while (index[i] >= '0' && index[i] <= '9') i++;
	while (index[i] == ' ') i++;
	if (i != index.size())
		return (false);
	return (true);
}

void	printContactInfo(Contact contact) {
	clearTerminal();
	std::cout << "First Name:      " << contact.getFirstName() << std::endl;
	std::cout << "Last Name:       " << contact.getLastName() << std::endl;
	std::cout << "Nickname:        " << contact.getNickname() << std::endl;
	std::cout << "Phone Number:    " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret:  " << contact.getDarkestSecret() << std::endl << std::endl;
}

void	Phonebook::searchContact( void ) {
	int		index = 0;
	std::string	_index;

	clearTerminal();
	std::cout << "List Of Contacts" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	while (index < numContacts)
	{
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
	std::cout << "Enter Index: ";
	getline(std::cin, _index);
	if (!checkIndex(_index)) {
		std::cout << "Invalid Index!" << std::endl;
		return;
	}
	std::stringstream	s(_index);
	s >> index;
	if (!(index >= 0 && index <= currentIndex)) {
		std::cout << "Index outside of range (0 - " << currentIndex << ")!" << std::endl; 
		return;
	}
	clearTerminal();
	std::cout << "Displaying Contact Info Index: " << index << std::endl;
	printContactInfo(contacts[index]);
}