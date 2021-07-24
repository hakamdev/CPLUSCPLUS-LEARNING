/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/24 20:33:05 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

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

	public:
		Phonebook( void );
		~Phonebook( void );
		void run( void );
};

#endif /* PHONEBOOK_HPP */