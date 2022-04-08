/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 18:31:35 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 02:34:17 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat( void ) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat: Constructor called!" << std::endl;
	this->type = type;
}
WrongCat::WrongCat ( WrongCat const & copy ) : WrongAnimal(copy) {
	std::cout << "WrongCat: Copy Constructor called!" << std::endl;
	*this = copy;
}

WrongCat&	WrongCat::operator = ( WrongCat const & copy ) {
	std::cout << "WrongCat: = operator called!" << std::endl;
	this->type = copy.type;
	return (*this);
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat: Destructor called!" << std::endl;
}

void		WrongCat::makeSound( void ) const {
	std::cout << "Moew Moew!!" << std::endl;
}
