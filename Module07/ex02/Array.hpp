/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 00:54:49 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/11 02:34:35 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
# define __ARRAY_HPP__

#include <iostream>

template<typename T>
class Array {
	private:
		uint32_t	_n;
		T			*_array;
	public:
		Array( void ) : _n(0) {
			_array = new T[0];
		}
		Array( uint32_t n ) : _n(n) {
			_array = new T[n];
		}
		Array( Array const & copy ) {
			*this = copy;
		}
		Array& operator = ( Array const & copy ) {
			_n = copy._n;
			_array = new T[_n];
			for (size_t i = 0; i < _n; i++) {
				_array[i] = copy._array[i];
			}
			return (*this);
		}
		~Array() {
			delete [] _array;
		}
		
		T& operator [] ( uint32_t n ) {
			if (n < 0 || n >= _n) {
				throw std::out_of_range("OutOfRangeException: Index is out of range!");
			}
			return _array[n];
		}
		uint32_t size( void ) const {
			return (_n);
		}
};

template<typename T>
std::ostream&	operator << (std::ostream &os, Array<T> &arr) {
	os << "Array: Size: " << arr.size() << std::endl;
	os << "[";
	for (uint32_t i = 0; i < arr.size(); i++) {
		os << arr[i];
		if (i < arr.size() - 1)
			os << ", ";
	}
	os << "]" << std::endl;
	return (os);
}

#endif // __ARRAY_HPP__
