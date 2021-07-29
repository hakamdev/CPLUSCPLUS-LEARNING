/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 20:12:11 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 21:07:35 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANB_HPP__
# define __HUMANB_HPP__

# include <iostream>
# include "Weapon.hpp"

using std::string;

class HumanB {
	
	private:
		string	_name;
		Weapon*	_weapon;
	
	public:
		HumanB( void );
		HumanB( string name );
		~HumanB( void );
		void	attack( void );

		Weapon*	getWeapon( void );
		void	setWeapon( Weapon& weapon );

		string&	name( void );
};

#endif /* __HUMANA_HPP__ */