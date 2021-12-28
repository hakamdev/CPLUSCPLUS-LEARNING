/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 18:37:59 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/27 20:11:56 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __FIXED_HPP__
# define __FIXED_HPP__

# include <string>

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