/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:20:28 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/25 03:43:14 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main( void ) {

	// My test
	Span s(10);
	try {
		s.addNumber(10);
		s.addNumber(1);
		s.addNumber(119);
		s.addNumber(7);
		s.addNumber(2);
	} catch (std::out_of_range& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
		
	} catch (std::exception& e) {
		std::cerr << "Error: not enough numbers" << std::endl;
	}
	
	// Their test
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// Big test
	Span big_s(10000);

	for (size_t i = 0; i < 10000; i++)
	{
		big_s.addNumber(i);
	}

	std::cout << big_s.shortestSpan() << std::endl;
	std::cout << big_s.longestSpan() << std::endl;

	// Many numbers at once
	int nums[] = {1, 3, 2, 5, 4, 7, 6, 23};
	std::vector<int> v(nums, nums + 8);
	Span s2(20);

	s2.addNumbers(v.begin(), v.end());

	std::cout << s2.shortestSpan() << std::endl;
	std::cout << s2.longestSpan() << std::endl;

	return (0);
}