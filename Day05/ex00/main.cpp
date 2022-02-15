/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:25:55 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 19:31:30 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "iostream"

int	main( void ) {

	// Safe Operations
	std::cout << "*** THERE SHOULD WORK PERFECTLY ***" << std::endl;
	Bureaucrat b1("Jack", 1);
	Bureaucrat b2(b1);
	Bureaucrat b3("John Snow", 150);
	Bureaucrat b4 = b3;
	
	std::cout << b2.getName() << " grade = " << b2.getGrade() << " before decrement!" << std::endl;
	b2.decrement();
	std::cout << b2.getName() << " grade = " << b2.getGrade() << " after decrement!" << std::endl;
	std::cout << b4.getName() << " grade = " << b4.getGrade() << " before decrement!" << std::endl;
	b4.increment();
	std::cout << b4.getName() << " grade = " << b4.getGrade() << " after decrement!" << std::endl;

	// Operations that throw exception
	std::cout << std::endl << "*** THERE SHOULD THROW AN EXCEPTION ***" << std::endl;
	try {
		Bureaucrat b5("Too Hight Gentleman", 0);
		Bureaucrat b6("Too Low Gentleman", 160);
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		b1.increment();
		b3.decrement();
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cout << e << std::endl;
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cout << e << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	return (0);
}