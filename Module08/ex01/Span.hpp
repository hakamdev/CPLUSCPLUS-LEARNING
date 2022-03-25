/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:20:37 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/25 03:29:48 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
# define __SPAN_HPP__

# include <iostream>
# include <vector>
# include <algorithm>

class Span {
	private:
		unsigned int N;
		std::vector<int> array;
	public:
		Span( void );
		Span( unsigned int N );
		Span( Span const & copy );
		~Span();
		Span& operator = ( Span const & copy );

		void addNumber(int n);
		void addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
		int shortestSpan( void );
		int longestSpan( void );
};

#endif // __SPAN_HPP__