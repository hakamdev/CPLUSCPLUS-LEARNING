/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:30:12 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:42:17 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

class Weapon {

	private:
		std::string	_type;

	public:
		Weapon( std::string type );
		Weapon( Weapon const & copy );
		Weapon( void );
		~Weapon( void );
		std::string const &	getType( void ) const;
		void				setType( std::string type );
};

#endif /* __WEAPON_HPP__ */