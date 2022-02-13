/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:31:01 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/13 23:22:13 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <iostream>

int main() {
	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	std::cout << dog->getType() << " " << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound(); //will output the cat sound!
	dog->makeSound();
	meta->makeSound();

	std::cout << std::endl;

	// Wrong Tests
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wcat = new WrongCat();
	std::cout << wcat->getType() << " " << std::endl;
	wcat->makeSound(); //will NOT output the cat sound!
	wmeta->makeSound();

	return (0);
}