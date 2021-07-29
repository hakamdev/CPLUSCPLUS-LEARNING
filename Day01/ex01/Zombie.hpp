/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:46 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 17:41:12 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

using std::string;

class Zombie {

	private:
		string	_name;

	public:
		Zombie( void );
		Zombie( string name );
		~Zombie( void );
		
		string&	name( void );
		//void	setName( string name );
		
		void	announce( void );
};

#endif /* __ZOMBIE_HPP__ */
