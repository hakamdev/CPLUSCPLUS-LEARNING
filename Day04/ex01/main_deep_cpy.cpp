/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_deep_cpy.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 19:34:27 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 19:37:06 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main( void ) {
	
	Animal *a = new Dog();
	Animal *b = new Cat();

	Animal *c = new Dog(a);
	Animal *d = new Cat(b);

	return (0);
}