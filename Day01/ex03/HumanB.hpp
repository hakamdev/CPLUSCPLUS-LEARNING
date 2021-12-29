/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:12:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:03:38 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	
	private:
		std::string	_name;
		Weapon*	_weapon;
	
	public:
		HumanB( void );
		HumanB( std::string name );
		~HumanB( void );
		void	attack( void );

		Weapon*	getWeapon( void );
		void	setWeapon( Weapon& weapon );

		std::string&	name( void );
};

#endif /* __HUMANA_HPP__ */