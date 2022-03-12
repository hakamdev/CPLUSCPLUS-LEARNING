/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 23:57:28 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/12 00:16:21 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
# define __WHATEVER_HPP__

template<typename T>
void	swap(T& v1, T& v2) {
	T temp = v1;
	v1 = v2;
	v2 = temp;
}

template<typename T>
T&		min(T& v1, T& v2) {
	return v1 < v2 ? v1 : v2;
}

template<typename T>
T&		max(T& v1, T& v2) {
	return v1 > v2 ? v1 : v2;
}

#endif // __WHATEVER_HPP__
