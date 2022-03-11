/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 15:43:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <sstream>

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

void	Phonebook::printField( std::string field ) {
	if (field.length() <= 10) {
		std::cout << std::setw(10) << field;
	} else {
		std::cout << field.substr(0, 9) << ".";
	}
}

bool	Phonebook::checkIndex(std::string index) {
	unsigned long i = 0;

	while (index[i] == ' ') i++;
	while (index[i] >= '0' && index[i] <= '9') i++;
	while (index[i] == ' ') i++;
	if (i != index.size())
		return (false);
	return (true);
}

void	Phonebook::printContactInfo(Contact contact) {
	clearTerminal();
	std::cout << "CONTACT INFO: " << contact.getFirstName() << " " << contact.getLastName() << std::endl;
	std::cout << "==============================================" << std::endl;
	std::cout << "FIRST NAME:      " << contact.getFirstName() << std::endl;
	std::cout << "LAST NAME:       " << contact.getLastName() << std::endl;
	std::cout << "NICKNAME:        " << contact.getNickname() << std::endl;
	std::cout << "PHONE NUMBER:    " << contact.getPhoneNumber() << std::endl;
	std::cout << "DARKEST SECRET:  " << contact.getDarkestSecret() << std::endl << std::endl;
	std::cout << "==============================================" << std::endl;
}

void	Phonebook::printContactTable( void ) {
	int		index = 0;

	clearTerminal();
	std::cout << "LIST OF CONTACTS:" << std::endl;
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
	if (numContacts == 0)
		std::cout << "|Phonebook is empty! Add some contacts first|" << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
}

void	Phonebook::addContact( void ) {
	std::string	value;

	clearTerminal();
	std::cout << "ADD NEW CONTACT:" << std::endl;

	while (value.length() == 0) {
		std::cout << "First Name: ";
		getline(std::cin, value);
		this->contacts[this->currentIndex].setFirstName(value);
	}
	value.clear();

	while (value.length() == 0) {
		std::cout << "Last Name: ";
		getline(std::cin, value);
		this->contacts[this->currentIndex].setLastName(value);
	}
	value.clear();

	while (value.length() == 0) {
		std::cout << "Nickname: ";
		getline(std::cin, value);
		this->contacts[this->currentIndex].setNickname(value);
	}
	value.clear();

	while (value.length() == 0) {
		std::cout << "Phone Number: ";
		getline(std::cin, value);
		this->contacts[this->currentIndex].setPhoneNumber(value);
	}
	value.clear();

	while (value.length() == 0) {
		std::cout << "Darkest Secret: ";
		getline(std::cin, value);
		this->contacts[this->currentIndex].setDarkestSecret(value);
	}
	value.clear();

	if (numContacts < 8)
		numContacts++;
	this->currentIndex = ++this->currentIndex % 8;
	clearTerminal();
	std::cout << "SUCCESS!" << std::endl << std::endl;
}

void	Phonebook::searchContact( void ) {
	int		index = 0;
	std::string	_index;

	printContactTable();
	if (numContacts == 0)
		return;
	std::cout << "Enter Index: ";
	getline(std::cin, _index);
	if (!checkIndex(_index)) {
		std::cout << "Error: Invalid index!" << std::endl;
		return;
	}
	std::stringstream	s;
	s << _index;
	s >> index;
	if (!(index >= 0 && index < numContacts)) {
		std::cout << "Error: Index outside range!" << std::endl; 
		return;
	}
	clearTerminal();
	std::cout << "CONTACT INFO AT INDEX: " << index << std::endl;
	printContactInfo(contacts[index]);
}

void	Phonebook::run( void ) {
	std::string command;

	clearTerminal();
	while (true)
	{
		std::cout << "ENTER YOUR COMMAND: <ADD, SEARCH, EXIT>" << std::endl;
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
