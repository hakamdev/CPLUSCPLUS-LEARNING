/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/18 19:19:37 by ehakam            #+#    #+#             */
/*   Updated: 2021/12/27 20:20:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CONTACT_HPP__
# define __CONTACT_HPP__

# include <iostream>

class Contact {
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;

	public:
		~Contact( void );
		Contact( void ); /* Default Constructor */
		Contact(
			std::string firstName,
			std::string lastName,
			std::string nickname,
			std::string phoneNumber,
			std::string darkestSecret 
			); /* Constructor with initialization list */

		/* getters */
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getPhoneNumber();
		std::string getDarkestSecret();

		/* setters */
		void setFirstName( std::string firstName );
		void setLastName( std::string lastName );
		void setNickname( std::string nickname );
		void setPhoneNumber( std::string phoneNumber );
		void setDarkestSecret( std::string darkestSecret );
};

#endif /* __CONTACT_HPP__ */