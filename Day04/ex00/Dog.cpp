/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:01:26 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 18:08:33 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include <iostream>

Dog::Dog( void ) : Animal("Dog") {
	std::cout << "Dog: Constructor called!" << std::endl;
	this->type = type;
}
Dog::Dog ( Dog const & copy ) : Animal(copy) {
	std::cout << "Dog: Copy Constructor called!" << std::endl;
	*this = copy;
}

Dog&	Dog::operator = ( Dog const & copy ) {
	std::cout << "Dog: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog: Destructor called!" << std::endl;
}

void		Dog::makeSound( void ) const {
	std::cout << "Haw Haw hhh!!" << std::endl;
}