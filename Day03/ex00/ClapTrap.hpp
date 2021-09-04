/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 16:19:38 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/04 14:30:57 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CLAPTRAP_HPP__
# define __CLAPTRAP_HPP__

# include <string>

using std::string;

class ClapTrap {
	
	private:
		string	_name;
		int		_hitPoints;
		int		_energyPoints;
		int		_attackDamage;
	
	public:
		ClapTrap( void );
		ClapTrap( std::string name );
		ClapTrap( ClapTrap const & copy );
		~ClapTrap( void );
		ClapTrap&	operator = ( ClapTrap const & copy );
		void		attack( std::string const & target );
		void		takeDamage( unsigned int amount );
		void		beRepaired( unsigned int amount );

};

#endif /* __CLAPTRAP_HPP__ */