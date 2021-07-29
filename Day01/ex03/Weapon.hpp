/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 18:30:12 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 18:53:14 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WEAPON_HPP__
# define __WEAPON_HPP__

#include <iostream>

using std::string;

class Weapon {

	private:
		string	type;

	public:
		Weapon( void );
		~Weapon( void );
		string&	const	getType( void );
		void			setType( string type );
};

#endif /* __WEAPON_HPP__ */