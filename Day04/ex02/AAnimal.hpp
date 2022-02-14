/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:34:13 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 01:22:01 by ehakam           ###   ########.fr       */
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
		AAnimal( void );
		AAnimal( std::string type );
		AAnimal ( AAnimal const & copy );
		AAnimal&	operator = ( AAnimal const & copy );
		virtual ~AAnimal( void );

		virtual std::string	getType( void ) const;
		virtual void		setType( std::string type );
		virtual void	makeSound( void ) const = 0;
};

#endif /* __AANIMAL_HPP__ */