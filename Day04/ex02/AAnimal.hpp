/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:34:13 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 01:03:02 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __AANIMAL_HPP__
# define __AANIMAL_HPP__

# include <string>
# include <iostream>

class AAnimal {
	protected:
		std::string		type;

	public:
		virtual std::string	getType( void ) const = 0;
		virtual void		setType( std::string type ) = 0;
		virtual void		makeSound( void ) const = 0;
};

#endif /* __AANIMAL_HPP__ */