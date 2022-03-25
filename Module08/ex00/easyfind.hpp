/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:24:48 by ehakam            #+#    #+#             */
/*   Updated: 2022/03/15 20:08:40 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <algorithm>
# include <iostream>

template<typename T>
int	easyfind(T searchable, int value) {
	typename T::iterator it = find(searchable.begin(), searchable.end(), value);
	if (it == searchable.end()) {
		throw std::exception();
	}
	return *it;
}

#endif // __EASYFIND_HPP__
