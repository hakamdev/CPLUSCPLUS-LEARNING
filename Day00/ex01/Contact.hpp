/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:19:37 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/18 19:36:23 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

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

#endif /* CONTACT_HPP */