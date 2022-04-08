/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:52:22 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:34:40 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
# define __CAT_HPP__

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Cat : public Animal {
	private:
		Brain* brain;

	public:
		Cat( void );
		Cat( Cat const & copy );
		Cat&	operator = ( Cat const & copy );
		virtual ~Cat( void );
		virtual void	makeSound( void ) const;
		Brain&			getBrain( void ) const;
};

#endif /* __CAT_HPP__ */
