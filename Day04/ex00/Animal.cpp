/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:38:20 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 05:50:43 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal( std::string type ) {
	std::cout << "Animal: Constructor called!" << std::endl;
	this->type = type;
}
Animal::Animal ( Animal const & copy ) {
	std::cout << "Animal: Copy Constructor called!" << std::endl;
	*this = copy;
}

Animal&	Animal::operator = ( Animal const & copy ) {
	std::cout << "Animal: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

Animal::~Animal( void ) {
	std::cout << "Animal: Destructor called!" << std::endl;
}

std::string	Animal::getType( void ) const {
	std::cout << "Animal: getType called!" << std::endl;
	return type;
}

void		Animal::setType( std::string type ) {
	std::cout << "Animal: setType called!" << std::endl;
	this->type = type;
}