/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:34:13 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:34:28 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
# define __ANIMAL_HPP__

# include <string>
# include <iostream>

class Animal {
	protected:
		std::string		type;
	
	public:
		Animal( void );
		Animal( std::string type );
		Animal ( Animal const & copy );
		Animal&	operator = ( Animal const & copy );
		virtual ~Animal( void );

		std::string	getType( void ) const;
		void		setType( std::string type );
		virtual void	makeSound( void ) const;
};

#endif /* __ANIMAL_HPP__ */
