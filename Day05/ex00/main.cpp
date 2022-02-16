/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/16 19:48:49 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "iostream"

int	main( void ) {

	// Safe Operations //
	std::cout << "*** THESE SHOULD WORK PERFECTLY ***" << std::endl;
	Bureaucrat b1("Jack", 1);
	Bureaucrat b2(b1);
	Bureaucrat b3("John Snow", 150);
	Bureaucrat b4 = b3;
	std::cout << std::endl;
	std::cout << b2 << "\t\t(before decrement)" << std::endl;
	b2.decrement();
	std::cout << b2 << "\t\t(after decrement)" << std::endl;
	std::cout << b4 << "\t\t(before increment)" << std::endl;
	b4.increment();
	std::cout << b4 << "\t\t(after increment)" << std::endl;

	// Operations that throw exception //
	std::cout << std::endl << "*** THESE SHOULD THROW AN EXCEPTION ***" << std::endl;

	try {
		Bureaucrat b5("Tomas Shelby", 0);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Bureaucrat b6("Carlos", 160);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b1.increment();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		b3.decrement();
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}
