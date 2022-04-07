/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 02:58:31 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/04 21:22:07 by ehakam           ###   ########.fr       */
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
		Fixed( int const value );
		Fixed( float const value );
		Fixed( Fixed const & copy );
		~Fixed( void );

		Fixed&	operator = ( Fixed const & copy );
		bool	operator == ( Fixed const & other ) const;
		bool	operator != ( Fixed const & other ) const;
		bool	operator < ( Fixed const & other ) const;
		bool	operator > ( Fixed const & other ) const;
		bool	operator <= ( Fixed const & other ) const;
		bool	operator >= ( Fixed const & other ) const;
		Fixed	operator + ( Fixed const & other );
		Fixed	operator - ( Fixed const & other );
		Fixed	operator * ( Fixed const & other );
		Fixed	operator / ( Fixed const & other );
		Fixed&	operator ++ ();
		Fixed	operator ++ (int);
		Fixed&	operator -- ();
		Fixed	operator -- (int);

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		static Fixed const & min( Fixed const & f1, Fixed const & f2 );
		static Fixed const & max( Fixed const & f1, Fixed const & f2 );
};

std::ostream&	operator << (std::ostream &os, const Fixed &fixed);

#endif /* __FIXED_HPP__ */
