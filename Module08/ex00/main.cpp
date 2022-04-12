/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:25:37 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/12 01:31:14 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <iostream>

int main( void ) {

	// testing with vector
	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(5);

	try {
		int result = easyfind(vect, 5);
		std::cout << "Value Found: " << result << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: Value Not Found!" << std::endl;
	}

	// testing with vector
	std::stack<int> st;
	st.push(-1);
	st.push(20);
	st.push(7);

	try {
		int result = easyfind(st, 200);
		std::cout << "Value Found: " << result << std::endl;
	} catch (std::exception& e) {
		std::cerr << "Error: Value Not Found!" << std::endl;
	}

	return (0);
}
