/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:34:49 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:02:36 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include <iostream>
# include "Weapon.hpp"

class HumanA {
	
	private:
		std::string	_name;
		Weapon& _weapon;
	
	public:
		HumanA( std::string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );
		
		std::string& getName( void );
		Weapon&	getWeapon( void );
};

#endif /* __HUMANA_HPP__ */