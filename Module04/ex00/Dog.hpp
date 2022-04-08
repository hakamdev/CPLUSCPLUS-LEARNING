/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:45:09 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:33:04 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"

class Dog : public Animal {
	public:
		Dog( void );
		Dog( Dog const & copy );
		Dog&	operator = ( Dog const & copy );
		virtual ~Dog( void );
		virtual void	makeSound( void ) const;
};

#endif /* __DOG_HPP__ */
