/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:01:26 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 01:20:23 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : AAnimal("Dog") {
	std::cout << "Dog: Constructor called!" << std::endl;
	this->brain = new Brain();
}

Dog::Dog ( Dog const & copy ) : AAnimal(copy) {
	std::cout << "Dog: Copy Constructor called!" << std::endl;
	*this = copy;
}

Dog&	Dog::operator = ( Dog const & copy ) {
	std::cout << "Dog: = operator called!" << std::endl;
	this->type = copy.type;
	this->brain = new Brain(*copy.brain);
	return (*this);
}

Dog::~Dog( void ) {
	std::cout << "Dog: Destructor called!" << std::endl;
	delete this->brain;
}

void	Dog::makeSound( void ) const {
	std::cout << "Haw Haw hhh!!" << std::endl;
}

Brain&	Dog::getBrain( void ) const {
	return (*this->brain);
}

// void	Dog::setType( std::string type ) {
// 	this->type = type;
// }

// std::string	Dog::getType( void ) const {
// 	return type;
// }
