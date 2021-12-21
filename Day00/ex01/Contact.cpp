/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:36:42 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/21 17:50:48 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Default Constructor */
Contact::Contact() {

}

 /* Constructor with initialization list */
Contact::Contact( 
			string firstName,
			string lastName,
			string nickname,
			string phoneNumber,
			string darkestSecret 
			):	firstName(firstName),
				lastName(lastName),
				nickname(nickname),
				phoneNumber(phoneNumber),
				darkestSecret(darkestSecret) {
					
				};

/* Default Desstructor */
Contact::~Contact() {
	
}

/* getters */
string Contact::getFirstName() {
	return (this->firstName);
}

string Contact::getLastName() {
	return (this->lastName);
}

string Contact::getNickname() {
	return (this->nickname);
}

string Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

string Contact::getDarkestSecret() {
	return (this->darkestSecret);
}

/* setters */
void Contact::setFirstName( string firstName ) {
	this->firstName = firstName;
}

void Contact::setLastName( string lastName ) {
	this->lastName = lastName;
}

void Contact::setNickname( string nickname ) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber( string phoneNumber ) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret( string darkestSecret ) {
	this->darkestSecret = darkestSecret;
}






