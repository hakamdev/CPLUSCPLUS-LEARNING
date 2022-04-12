/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:06:30 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/11 21:34:52 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"
#include <sstream>

std::string to_string(int i) {
	std::ostringstream ss;
	ss << i;
	return ss.str();
}

int main() {
	
	std::cout << "Creating an int array with 10 elements:" << std::endl;
	Array <int> b(10);

	std::cout << "Filling the array using [] operator:" << std::endl;
	for (uint32_t i = 0; i < b.size(); i++) {
		b[i] = i;
	}
	std::cout << b << std::endl;

	std::cout << "Creating a string array with 5 elements:" << std::endl;
	Array <std::string> sb(5);

	std::cout << "Filling the array using [] operator:" << std::endl;
	for (uint32_t i = 0; i < sb.size(); i++) {
		sb[i] = ("element: " + to_string(i));
	}

	std::cout << sb << std::endl;

	// Testing copying
	Array <std::string> sbCopy = sb;
	Array <std::string> sbCopy2(sb);

	sbCopy[0] = "First Elements changed";
	sbCopy2[0] = "First Elements changed here too";

	std::cout << "original Array shouldn't be affected" << std::endl;
	std::cout << sb << std::endl;

	std::cout << "Copy Arrays" << std::endl;
	std::cout << sbCopy << std::endl;
	std::cout << sbCopy2 << std::endl;

	return (0);
}
