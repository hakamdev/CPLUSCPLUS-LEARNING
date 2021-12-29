/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:30:12 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:08:17 by ehakam           ###   ########.fr       */
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
		Weapon( void );
		~Weapon( void );
		std::string&	getType( void );
		void	setType( std::string type );
};

#endif /* __WEAPON_HPP__ */