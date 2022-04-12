/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:51:42 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/12 00:20:23 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __MUTANTSTACK_HPP__
# define __MUTANTSTACK_HPP__

# include <iostream>
# include <stack>
# include <algorithm>

template<typename T>
class MutantStack : public std::stack<T> {
	public:
		typedef typename std::stack<T>::container_type::iterator iterator;

		MutantStack( void ) { }
		
		MutantStack( MutantStack const & copy ) {
			*this = copy;
		}

		MutantStack& operator = ( MutantStack const & copy ) {
			this->c = copy.c;
			return *this;
		}

		iterator begin() {
			return this->c.begin();
		}

		iterator end() {
			return this->c.end();
		}
};

#endif // __MUTANTSTACK_HPP__