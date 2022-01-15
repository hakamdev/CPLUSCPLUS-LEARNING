/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:31:01 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/15 19:41:40 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main() {

	std::cout << "TEST 1" << std::endl;

	Animal* animals[4];

	for(int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for(int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}

	for(int i = 0; i < 4; i++) {
		delete animals[i];
	}

	std::cout << std::endl << std::endl << "TEST 2" << std::endl;

	const Dog a;
	const Cat b;

	const Dog c(a);
	const Cat d(b);

	return (0);
}