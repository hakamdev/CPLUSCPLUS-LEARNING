/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:19:37 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/21 17:49:48 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>

using std::string;

class Contact {
	private:
		string	firstName;
		string	lastName;
		string	nickname;
		string	phoneNumber;
		string	darkestSecret;

	public:
		~Contact( void );
		Contact( void ); /* Default Constructor */
		Contact(
			string firstName,
			string lastName,
			string nickname,
			string phoneNumber,
			string darkestSecret 
			); /* Constructor with initialization list */

		/* getters */
		string getFirstName();
		string getLastName();
		string getNickname();
		string getPhoneNumber();
		string getDarkestSecret();

		/* setters */
		void setFirstName( string firstName );
		void setLastName( string lastName );
		void setNickname( string nickname );
		void setPhoneNumber( string phoneNumber );
		void setDarkestSecret( string darkestSecret );
};

#endif /* __CONTACT_HPP__ */