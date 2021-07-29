/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 19:34:49 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 20:46:22 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HUMANA_HPP__
# define __HUMANA_HPP__

# include <iostream>
# include "Weapon.hpp"

using std::string;

class HumanA {
	
	private:
		string	_name;
		Weapon& _weapon;
	
	public:
		HumanA( string name, Weapon& weapon );
		~HumanA( void );
		void	attack( void );
		
		string& getName( void );
		Weapon&	getWeapon( void );
};

#endif /* __HUMANA_HPP__ */