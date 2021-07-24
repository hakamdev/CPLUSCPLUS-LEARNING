/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:36:42 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/24 19:35:15 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Default Constructor */
Contact::Contact() {

}

 /* Constructor with initialization list */
Contact::Contact( 
			String firstName,
			String lastName,
			String nickname,
			String phoneNumber,
			String darkestSecret 
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
String Contact::getFirstName() {
	return (this->firstName);
}

String Contact::getLastName() {
	return (this->lastName);
}

String Contact::getNickname() {
	return (this->nickname);
}

String Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

String Contact::getDarkestSecret() {
	return (this->darkestSecret);
}

/* setters */
void Contact::setFirstName( String firstName ) {
	this->firstName = firstName;
}

void Contact::setLastName( String lastName ) {
	this->lastName = lastName;
}

void Contact::setNickname( String nickname ) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber( String phoneNumber ) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret( String darkestSecret ) {
	this->darkestSecret = darkestSecret;
}






