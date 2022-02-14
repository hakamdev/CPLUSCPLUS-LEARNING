/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:52:22 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 00:33:28 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public AAnimal {
	private:
		Brain* brain;

	public:
		Cat( void );
		Cat( Cat const & copy );
		Cat&	operator = ( Cat const & copy );
		virtual ~Cat( void );
		virtual void	makeSound( void ) const;
		Brain&			getBrain( void ) const;
		virtual std::string	getType( void ) const;
		virtual void	setType( std::string type );
};

#endif /* __CAT_HPP__ */