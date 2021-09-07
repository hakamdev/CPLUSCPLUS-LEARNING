/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/07 15:55:19 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/07 16:26:00 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FRAGTRAP_HPP__
# define __FRAGTRAP_HPP__

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap {
	public:
		FragTrap( void );
		FragTrap( std::string name );
		~FragTrap( void );
		FragTrap( FragTrap const & copy );
		FragTrap&	operator = ( FragTrap const & copy );
		void		highFivesGuys( void );
};

#endif /* __FRAGTRAP_HPP__ */