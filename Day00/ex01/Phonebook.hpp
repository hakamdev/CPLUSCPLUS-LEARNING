/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/23 17:45:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/23 17:50:53 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

class Phonebook {
	private:
		int		currentIndex;
		Contact contacts[8];
		void	addContact( void );
		void	searchContact( void );

	public:
		Phonebook( void );
		~Phonebook( void );
		void run( void );
};

#endif /* PHONEBOOK_HPP */