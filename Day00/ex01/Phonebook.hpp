/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/27 20:28:11 by ehakam           ###   ########.fr       */
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

	public:
		Phonebook( void );
		~Phonebook( void );
		void run( void );
};

#endif /* __PHONEBOOK_HPP__ */