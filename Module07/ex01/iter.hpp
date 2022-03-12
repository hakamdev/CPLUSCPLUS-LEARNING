/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:29:46 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/12 00:49:22 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
# define __ITER_HPP__

#include <iostream>

template<typename T>
void func(T& value) {
	value = value + value;
}

template<typename T>
void print(T& value) {
	std::cout << value << std::endl;
}

template<typename T>
void	iter(T array[], size_t size, void (*f)(T&)) {
	for (size_t i = 0; i < size; i++) {
		f(array[i]);
	}
}

#endif // __ITER_HPP__