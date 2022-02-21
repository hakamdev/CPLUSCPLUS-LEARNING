/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:20:46 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 18:33:29 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE_HPP__
# define __ZOMBIE_HPP__

# include <iostream>

class Zombie {

	private:
		std::string	_name;

	public:
		Zombie( void );
		Zombie( std::string name );
		~Zombie( void );
		
		std::string	getName( void ) const;
		void		setName( std::string name );
		void		announce( void );
};

#endif /* __ZOMBIE_HPP__ */
