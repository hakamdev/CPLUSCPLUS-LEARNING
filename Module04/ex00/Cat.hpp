/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:52:22 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:33:17 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"

class Cat : public Animal {
	public:
		Cat( void );
		Cat( Cat const & copy );
		Cat&	operator = ( Cat const & copy );
		virtual ~Cat( void );
		virtual void	makeSound( void ) const;
};

#endif /* __CAT_HPP__ */
