/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:37:59 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/31 02:00:49 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

#include <string>

using std::string;

class Fixed {
	private:
		int					_value;
		static int const	_nFractBits = 8;
	
	public:
		Fixed( void );
		Fixed( Fixed& copy );
		~Fixed( void );
		Fixed&	operator = ( Fixed const & copy );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif /* __FIXED_HPP__ */