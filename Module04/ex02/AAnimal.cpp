/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 01:15:51 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 01:23:18 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void ) : type("AAnimal") {
	std::cout << "AAnimal: Constructor called!" << std::endl;
}

AAnimal::AAnimal( std::string type ) {
	std::cout << "AAnimal: Constructor called!" << std::endl;
	this->type = type;
}

AAnimal::AAnimal( AAnimal const & copy ) {
	std::cout << "AAnimal: Copy Constructor called!" << std::endl;
	*this = copy;
}

AAnimal&	AAnimal::operator = ( AAnimal const & copy ) {
	std::cout << "AAnimal: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

AAnimal::~AAnimal( void ) {
	std::cout << "AAnimal: Destructor called!" << std::endl;
}

std::string	AAnimal::getType( void ) const {
	return type;
}

void	AAnimal::setType( std::string type ) {
	this->type = type;
}
