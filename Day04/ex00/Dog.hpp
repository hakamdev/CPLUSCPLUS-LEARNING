/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:45:09 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 18:26:56 by ehakam           ###   ########.fr       */
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
		~Dog( void );
		virtual void	makeSound( void ) const;
};

#endif /* __DOG_HPP__ */