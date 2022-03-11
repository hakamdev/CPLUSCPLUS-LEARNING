/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 21:21:52 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/11 22:58:41 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "program.hpp"
#include <random>
#include <iostream>

int		random(int min, int max) {
	srand(time(NULL));
	return rand() % ( max - min + 1) + min;
}

Base	*generate(void) {
	int index = random(0, 2);
	switch (index)
	{
		case 0:
			std::cout << "<< Generated object of type A >>" << std::endl;
			return new A();
		case 1:
			std::cout << "<< Generated object of type B >>" << std::endl;
			return new B();
		case 2:
			std::cout << "<< Generated object of type C >>" << std::endl;
			return new C();
		default:
			std::cout << "<< Generated object of type A >>" << std::endl;
			return new A();
	}
}

void	identify(Base* p) {
	std::cout << "Identify Class using Pointer:" << std::endl;
	A* ptrA = dynamic_cast<A*>(p);
	if (ptrA != nullptr) {
		std::cout << "Class Type: A" << std::endl;
		return ;
	}
	
	B* ptrB = dynamic_cast<B*>(p);
	if (ptrB != nullptr) {
		std::cout << "Class Type: B" << std::endl;
		return ;
	}

	C* ptrC = dynamic_cast<C*>(p);
	if (ptrC != nullptr) {
		std::cout << "Class Type: C" << std::endl;
		return ;
	}
}

void	identify(Base& p) {
	std::cout << "Identify Class using Reference:" << std::endl;
	try {
		if (&dynamic_cast<A&>(p))
			std::cout << "Class Type: A" << std::endl;
	} catch (std::exception& e) {}
	try {
		if (&dynamic_cast<B&>(p))
			std::cout << "Class Type: B" << std::endl;
	} catch (std::exception& e) {}
	try {
		if (&dynamic_cast<C&>(p))
			std::cout << "Class Type: C" << std::endl;
	} catch (std::exception& e) {}
}
