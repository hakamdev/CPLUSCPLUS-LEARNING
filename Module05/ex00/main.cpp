/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/08 23:42:57 by ehakam           ###   ########.fr       */
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
	Bureaucrat b4("Lady Brian", 150);
	std::cout << std::endl;
	std::cout << "(before decrement) " << b2;
	b2.decrement();
	std::cout << "(after decrement) " << b2;
	std::cout << "(before increment) " << b4;
	b4.increment();
	std::cout << "(after increment) " << b4;

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
