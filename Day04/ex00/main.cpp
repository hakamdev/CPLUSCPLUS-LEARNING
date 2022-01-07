/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:31:01 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 05:51:07 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

int main( void ) {

	Animal a("Type A Animal");
	Animal *b = new Animal("Type B Animal");
	Animal c(a);

	std::cout << c.getType() << std::endl;
	c.setType("Type C Animal");
	std::cout << c.getType() << std::endl;

	delete b;
	return (0);
}