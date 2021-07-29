/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:18:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 15:01:09 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

using std::string;

class Zombie {

	private:
		string	name;

	public:
		Zombie( void );
		Zombie( string name );
		~Zombie( void );
		
		string	getName( void );
		void	setName( string name );
		
		void	announce( void );
};

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

#endif /* __ZOMBIE_HPP__ */
