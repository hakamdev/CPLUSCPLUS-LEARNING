/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:31:28 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 18:34:31 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
# define __WRONGANIMAL_HPP__

# include <string>

class WrongAnimal {
	protected:
		std::string		type;
	
	public:
		WrongAnimal( void );
		WrongAnimal( std::string type );
		WrongAnimal ( WrongAnimal const & copy );
		WrongAnimal&	operator = ( WrongAnimal const & copy );
		~WrongAnimal( void );

		std::string	getType( void ) const;
		void		setType( std::string type );
		void		makeSound( void ) const;
};

#endif /* __WRONGANIMAL_HPP__ */
