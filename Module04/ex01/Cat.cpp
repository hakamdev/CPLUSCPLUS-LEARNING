/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 17:54:42 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:34:37 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal("Cat") {
	std::cout << "Cat: Constructor called!" << std::endl;
	this->type = type;
	this->brain = new Brain();
}

Cat::Cat ( Cat const & copy ) : Animal(copy) {
	std::cout << "Cat: Copy Constructor called!" << std::endl;
	*this = copy;
}

Cat&	Cat::operator = ( Cat const & copy ) {
	std::cout << "Cat: = operator called!" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

Cat::~Cat( void ) {
	std::cout << "Cat: Destructor called!" << std::endl;
	delete this->brain;
}

void	Cat::makeSound( void ) const {
	std::cout << "Moew Moew!!" << std::endl;
}

Brain&	Cat::getBrain( void ) const {
	return (*this->brain);
}
