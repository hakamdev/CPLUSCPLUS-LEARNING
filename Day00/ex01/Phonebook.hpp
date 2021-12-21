/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/21 18:01:22 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
# define __PHONEBOOK_HPP__

# include "Contact.hpp"
# include <iostream>
# include <iomanip>

using std::stringstream;
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::setw;

class Phonebook {
	private:
		int		currentIndex;
		int		numContacts;
		Contact contacts[8];

		void	printField( string field );
		void	addContact( void );
		void	searchContact( void );

	public:
		Phonebook( void );
		~Phonebook( void );
		void run( void );
};

#endif /* __PHONEBOOK_HPP__ */