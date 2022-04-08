/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:45:09 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:35:20 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
# define __DOG_HPP__

# include "AAnimal.hpp"
# include "Brain.hpp"
# include <iostream>

class Dog : public AAnimal {
	private:
		Brain* brain;

	public:
		Dog( void );
		Dog( Dog const & copy );
		Dog&	operator = ( Dog const & copy );
		virtual ~Dog( void );
		virtual void	makeSound( void ) const;
		Brain&			getBrain( void ) const;
		// virtual std::string	getType( void ) const;
		// virtual void		setType( std::string type );
};

#endif /* __DOG_HPP__ */
