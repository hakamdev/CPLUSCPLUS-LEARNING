/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Hakam.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:40:37 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/17 20:28:25 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Hakam {
	private:
		int			age;
		std::string	name;
		std::string	id;

	public:
		/*		Getters		*/
		int			getAge( void ) const;
		std::string	getName( void ) const;
		std::string	getId( void ) const;
		/*		Setters		*/
		void		setAge( int age );
		void		setName( std::string name );
		void		setId( std::string id );
		/*		Constr		*/
		Hakam( void );
		Hakam( int age, std::string name, std::string id );
		~Hakam( void );
};