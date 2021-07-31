/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:33:17 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/30 17:33:59 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __KAREN_HPP__
# define __KAREN_HPP__

# include <string>

class Karen {
	private:
		void	debug( void );
		void	info( void );
		void	warning( void );
		void	error( void );
		void	(Karen::*funPtr)( void );
	
	public:
		Karen( void );
		~Karen( void );
		void complain( std::string level );
};

# endif /* __KAREN_HPP__ */
