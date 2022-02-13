/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:15:56 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/13 23:08:24 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Brain: Constructor called!" << std::endl;
}

Brain::Brain( Brain const & copy ) {
	std::cout << "Brain: Copy Constructor called!" << std::endl;
	*this = copy;
}

Brain&	Brain::operator = ( Brain const & copy ) {
	std::cout << "Brain: = operator called!" << std::endl;
	for (size_t i = 0; i < this->ideas->length(); i++) {
		this->ideas[i] = copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain( void ) {
	std::cout << "Brain: Destructor called!" << std::endl;
}
