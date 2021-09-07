/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:06 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/07 17:14:42 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <string>

using std::string;

class ClapTrap {
	
	protected:
		string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( std::string name, int hitPoints, int energyPoints, int attackDamage );
		ClapTrap( ClapTrap const & copy );
		~ClapTrap( void );
		ClapTrap&	operator = ( ClapTrap const & copy );
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

};

#endif /* __CLAPTRAP_HPP__ */