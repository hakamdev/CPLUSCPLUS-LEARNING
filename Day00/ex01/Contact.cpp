/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:36:42 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/18 19:42:20 by ehakam           ###   ########.fr       */
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

String Contact::getNickname() {
	return (this->lastName);
}

String Contact::getPhoneNumber() {
	return (this->phoneNumber);
}

String Contact::getDarkestSecret() {
	return (this->darkestSecret);
}

/* setters */







