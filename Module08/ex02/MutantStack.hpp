/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 21:51:42 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/25 23:09:09 by ehakam           ###   ########.fr       */
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