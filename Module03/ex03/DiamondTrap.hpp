/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 16:37:38 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/07 00:20:13 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DIAMONDTRAP_HPP__
# define __DIAMONDTRAP_HPP__

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
	private:
		std::string	_name;
	
	public:
		DiamondTrap( std::string name );
		DiamondTrap( DiamondTrap const & copy );
		~DiamondTrap( void );
		DiamondTrap&	operator = ( DiamondTrap const & copy );
		void			attack( std::string const & target );
		void			whoAmI( void );
};

#endif /* __DIAMONDTRAP_HPP__ */
