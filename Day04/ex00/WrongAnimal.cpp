/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:31:33 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 18:35:35 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal( void ) : type("WrongAnimal") {
	std::cout << "WrongAnimal: Constructor called!" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) {
	std::cout << "WrongAnimal: Constructor called!" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal ( WrongAnimal const & copy ) {
	std::cout << "WrongAnimal: Copy Constructor called!" << std::endl;
	*this = copy;
}

WrongAnimal&	WrongAnimal::operator = ( WrongAnimal const & copy ) {
	std::cout << "WrongAnimal: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal( void ) {
	std::cout << "WrongAnimal: Destructor called!" << std::endl;
}

std::string	WrongAnimal::getType( void ) const {
	// std::cout << "WrongAnimal: getType called!" << std::endl;
	return type;
}

void		WrongAnimal::setType( std::string type ) {
	std::cout << "WrongAnimal: setType called!" << std::endl;
	this->type = type;
}

void		WrongAnimal::makeSound( void ) const {
	std::cout << "WrongAnimal sounds!!" << std::endl;
}