/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:34:49 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 19:06:36 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	
	private:
		std::string	_name;
		Weapon&		_weapon;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		
		void				attack( void );
		std::string const &	getName( void ) const;
		Weapon const &		getWeapon( void ) const;
};

#endif /* __HUMANA_HPP__ */