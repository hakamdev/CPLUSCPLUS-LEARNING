/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/21 19:19:08 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	clearTerminal() {
	/* 
		This escape sequence clears the terminal window 
		and places the cursor on 1;1 position :)
	*/
	cout << "\033[2J\033[1;1H";
}

Phonebook::Phonebook( void ) {
	currentIndex = 0;
	numContacts = 0;
}

Phonebook::~Phonebook( void ) {
	
}

void	Phonebook::run( void ) {
	string command;

	while (true)
	{
		cout << "Please, Enter Command: <ADD, SEARCH, EXIT>" << endl;
		cout << "> ";
		getline(cin, command);
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

void	Phonebook::printField( string field ) {
	if (field.length() <= 10) {
		cout << setw(10) << field;
	} else {
		cout<< field.substr(0, 9) << ".";
	}
}

void	Phonebook::addContact( void ) {
	string	value;

	clearTerminal();
	cout << "Adding A New Contact" << endl;

	cout << "Fist Name: ";
	getline(cin, value);
	this->contacts[this->currentIndex].setFirstName(value);

	cout << "Last Name: ";
	getline(cin, value);
	this->contacts[this->currentIndex].setLastName(value);

	cout << "Nickname: ";
	getline(cin, value);
	this->contacts[this->currentIndex].setNickname(value);

	cout << "Phone Number: ";
	getline(cin, value);
	this->contacts[this->currentIndex].setPhoneNumber(value);

	cout << "Darkest Secret: ";
	getline(cin, value);
	this->contacts[this->currentIndex].setDarkestSecret(value);

	if (numContacts < 8)
		numContacts++;
	this->currentIndex = ++this->currentIndex % 8;
	clearTerminal();
	cout << "Contact Added Successfully!" << endl << endl;
}

bool	checkIndex(string index) {
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
	cout << "First Name:      " << contact.getFirstName() << endl;
	cout << "Last Name:       " << contact.getLastName() << endl;
	cout << "Nickname:        " << contact.getNickname() << endl;
	cout << "Phone Number:    " << contact.getPhoneNumber() << endl;
	cout << "Darkest Secret:  " << contact.getDarkestSecret() << endl << endl;
}

void	Phonebook::searchContact( void ) {
	int		index = 0;
	string	_index;

	clearTerminal();
	cout << "List Of Contacts" << endl;
	cout << "---------------------------------------------" << endl;
	cout << "|     Index|First Name| Last Name|  Nickname|" << endl;
	cout << "---------------------------------------------" << endl;
	while (index < numContacts)
	{
		cout << "|";
		cout << setw(10) << index;
		cout << "|";
		printField(contacts[index].getFirstName());
		cout << "|";
		printField(contacts[index].getLastName());
		cout << "|";
		printField(contacts[index].getNickname());
		cout << "|" << endl;
		index++;
	}
	cout << "---------------------------------------------" << endl;
	cout << "Enter Index: ";
	getline(cin, _index);
	if (!checkIndex(_index)) {
		cout << "Invalid Index!" << endl;
		return;
	}
	stringstream	s(_index);
	s >> index;
	if (!(index >= 0 && index <= currentIndex)) {
		cout << "Index outside of range (0 - " << currentIndex << ")!" << endl; 
		return;
	}
	clearTerminal();
	cout << "Displaying Contact Info Index: " << index << endl;
	printContactInfo(contacts[index]);
}