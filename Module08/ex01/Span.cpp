/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/25 02:20:32 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/12 01:26:08 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span( void ) {
	std::cout << "Span: Default Constructor called" << std::endl;
}

Span::Span( unsigned int N ) : N(N) {
	std::cout << "Span: Constructor called" << std::endl;
}

Span::Span( Span const & copy ) {
	std::cout << "Span: Copy Constructor called" << std::endl;
	*this = copy;
}

Span::~Span() {
	std::cout << "Span: Destructor called" << std::endl;
}

Span& Span::operator = ( Span const & copy ) {
	std::cout << "Span: = operator called" << std::endl;
	this->N = copy.N;
	this->array = copy.array;
	return *this;
}

void Span::addNumber(int n) {
	if (array.size() == N)
		throw std::out_of_range("Error: The array is already full!");
	array.push_back(n);
}

void Span::addNumbers(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	if (array.size() == N || std::distance(first, last) > (long)N - (long)array.size())
		throw std::out_of_range("Error: The array is already full!");
	array.insert(array.end(), first, last);
}

int Span::shortestSpan( void ) {
	int span;
	if (array.empty() || array.size() == 1)
		throw std::exception();
	std::sort(array.begin(), array.end());
	span = array[1] - array[0];
	for (size_t i = 0; i < array.size() - 1; i++) {
		if ((array[i + 1] - array[i]) < span)
			span = (array[i + 1] - array[i]);
	}
	return span;
}

int Span::longestSpan( void ) {
	if (array.empty() || array.size() == 1) 
		throw std::exception();
	std::sort(array.begin(), array.end());
	return array.back() - array.front();
}
