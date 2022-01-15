/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:54:42 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 18:08:28 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat: Constructor called!" << std::endl;
	this->type = type;
}
Cat::Cat ( Cat const & copy ) : Animal(copy) {
	std::cout << "Cat: Copy Constructor called!" << std::endl;
	*this = copy;
}

Cat&	Cat::operator = ( Cat const & copy ) {
	std::cout << "Cat: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat: Destructor called!" << std::endl;
}

void		Cat::makeSound( void ) const {
	std::cout << "Moew Moew!!" << std::endl;
}