/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 02:10:54 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 02:00:19 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <string>
# include <cmath>

class Fixed {
	private:
		int					_value;
		static int const	_precision = 8;

	public:
		Fixed( void );
		Fixed( int value );
		Fixed( float value );
		Fixed( Fixed const & copy );
		~Fixed( void );
		Fixed&	operator = ( Fixed const & copy );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream&	operator << (std::ostream &os, const Fixed &fixed);

#endif /* __FIXED_HPP__ */
