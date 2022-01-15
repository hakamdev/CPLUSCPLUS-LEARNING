/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:45:09 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 19:27:27 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
	private:
		Brain* brain;

	public:
		Dog( void );
		Dog( Dog const & copy );
		Dog&	operator = ( Dog const & copy );
		virtual ~Dog( void );
		virtual void	makeSound( void ) const;
};

#endif /* __DOG_HPP__ */