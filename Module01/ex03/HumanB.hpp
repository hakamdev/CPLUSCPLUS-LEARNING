/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:12:11 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:09:40 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include <iostream>
# include "Weapon.hpp"

class HumanB {
	
	private:
		std::string	_name;
		Weapon*		_weapon;

	public:
		HumanB( void );
		HumanB( std::string name );
		~HumanB( void );

		void				attack( void );
		std::string const &	getName( void ) const;
		Weapon const &		getWeapon( void ) const;
		void				setWeapon( Weapon& weapon );
};

#endif /* __HUMANA_HPP__ */