/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:11 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 13:28:45 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

class Phonebook {
	private:
		int		currentIndex;
		int		numContacts;
		Contact contacts[8];

		void	printField( std::string field );
		void	addContact( void );
		void	searchContact( void );
		void	printContactTable( void );
		bool	checkIndex( std::string index );
		void	printContactInfo(Contact contact);

	public:
		Phonebook( void );
		~Phonebook( void );
		void run( void );
};

#endif /* __PHONEBOOK_HPP__ */