/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 05:31:01 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/14 00:34:10 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define GRE "\033[1;32m"
#define CY "\033[1;33m"

void test1() {
	std::cout << RED "*** [TEST 1] ***" RESET << std::endl;
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	delete j; //should not create a leak
	delete i;
}

void test2() {
	std::cout << std::endl << RED "*** [TEST 2] ***"  RESET << std::endl;
	AAnimal* animals[4];
	std::cout << GRE "[TEST 2] Create Array of Cats and Dogs!" RESET << std::endl;
	for(int i = 0; i < 4; i++) {
		if (i < 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << GRE "[TEST 2] Animals making sounds!" RESET << std::endl;
	for(int i = 0; i < 4; i++) {
		animals[i]->makeSound();
	}
	std::cout << GRE "[TEST 2] Deleting 'em mf Cats and Dogs!" RESET << std::endl;
	for(int i = 0; i < 4; i++) {
		delete animals[i];
	}	
}

void test3() {
	std::cout << std::endl << RED "*** [TEST 3] ***" RESET << std::endl;
	std::cout << GRE "[TEST 3] Create a Dog and a Cat!" RESET << std::endl;
	const Dog a;
	const Cat b;
	
	std::cout << GRE "[TEST 3] Create a copies of Dog and Cat!" RESET << std::endl;
	const Dog c(a);
	const Cat d(b);

	std::cout << CY "Memory address of Dog a's brain is      : " << &a.getBrain() << RESET << std::endl;
	std::cout << CY "Memory address of Copy Dog c's brain is : " << &c.getBrain()  << RESET << std::endl;

	std::cout << CY "Memory address of Cat b's brain is      : " << &b.getBrain()  << RESET << std::endl;
	std::cout << CY "Memory address of Copy Cat d's brain is : " << &d.getBrain()  << RESET << std::endl;
}

int main() {
	test1();
	test2();
	test3();
	return (0);
}
