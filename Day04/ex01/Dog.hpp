/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:45:09 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/13 23:43:56 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public Animal {
	private:
		Brain* brain;

	public:
		Dog( void );
		Dog( Dog const & copy );
		Dog&	operator = ( Dog const & copy );
		virtual ~Dog( void );
		virtual void	makeSound( void ) const;
		Brain&			getBrain( void ) const;
};

#endif /* __DOG_HPP__ */