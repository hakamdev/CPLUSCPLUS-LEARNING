/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:19:37 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/29 14:19:37 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>

typedef std::string String;

class Contact {
	private:
		String	firstName;
		String	lastName;
		String	nickname;
		String	phoneNumber;
		String	darkestSecret;

	public:
		~Contact( void );
		Contact( void ); /* Default Constructor */
		Contact(
			String firstName,
			String lastName,
			String nickname,
			String phoneNumber,
			String darkestSecret 
			); /* Constructor with initialization list */

		/* getters */
		String getFirstName();
		String getLastName();
		String getNickname();
		String getPhoneNumber();
		String getDarkestSecret();

		/* setters */
		void setFirstName( String firstName );
		void setLastName( String lastName );
		void setNickname( String nickname );
		void setPhoneNumber( String phoneNumber );
		void setDarkestSecret( String darkestSecret );
};

#endif /* __CONTACT_HPP__ */