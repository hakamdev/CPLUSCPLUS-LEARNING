/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 14:18:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 17:57:27 by hakamgo          ###   ########.fr       */
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
		
		void	announce( void );
};

#endif /* __ZOMBIE_HPP__ */