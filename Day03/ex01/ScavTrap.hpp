/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:13 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/06 18:36:24 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SCAVTRAP_HPP__
# define __SCAVTRAP_HPP__

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	
	public:
		ScavTrap( void );
		ScavTrap( 	std::string name,
					int hitPoints,
					int energyPoints,
					int attackDamage
					);
		~ScavTrap( void );
		void	guardGate( void );
};

#endif /* __SCAVTRAP_HPP__ */