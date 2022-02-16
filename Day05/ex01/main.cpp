/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/16 19:49:00 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "iostream"

int	main( void ) {

	// Safe Operations //
	std::cout << "*** THESE SHOULD WORK PERFECTLY ***" << std::endl;
	
	Form f1("Form1", 12, 2);
	Form f2("Form2", 10, 1);
	Form f3 = f2;
	Form f4 = f1;
	Bureaucrat b1("Bureau1", 1);
	Bureaucrat b2("Bureau2", 40);
	Bureaucrat b3 = b2;
	
	std::cout << f1 << std::endl;
	std::cout << b1 << std::endl;

	b1.signForm(f1);
	b2.signForm(f2);

	
	// Operations that throw exception //
	std::cout << std::endl << "*** THESE SHOULD THROW AN EXCEPTION ***" << std::endl;

	try {
		Form ff("FormF", 160, 170);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		Form ff2("FormF2", 0, -1);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		f4.beSigned(b2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}
