/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:36:42 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/27 20:24:01 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

/* Default Constructor */
Contact::Contact() {

}

 /* Constructor with initialization list */
Contact::Contact( 
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret 
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
std::string Contact::getFirstName() {
	return (this->firstName);
}

std::string Contact::getLastName() {
	return (this->lastName);
}

std::string Contact::getNickname() {
	return (this->nickname);
}

std::string Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret() {
	return (this->darkestSecret);
}

/* setters */
void Contact::setFirstName( std::string firstName ) {
	this->firstName = firstName;
}

void Contact::setLastName( std::string lastName ) {
	this->lastName = lastName;
}

void Contact::setNickname( std::string nickname ) {
	this->nickname = nickname;
}

void Contact::setPhoneNumber( std::string phoneNumber ) {
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret( std::string darkestSecret ) {
	this->darkestSecret = darkestSecret;
}






