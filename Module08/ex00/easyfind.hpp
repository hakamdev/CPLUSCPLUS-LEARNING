/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 03:24:48 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/11 23:52:28 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
# define __EASYFIND_HPP__

# include <algorithm>
# include <iostream>
# include <vector>
# include <stack>
# include <queue>

template<typename T>
int	easyfind(T searchable, int value) {
	typename T::iterator it = find(searchable.begin(), searchable.end(), value);
	if (it == searchable.end()) {
		throw std::exception();
	}
	return *it;
}

int	easyfind(std::stack<int> searchable, int value) {
	std::vector<int> v;
	std::stack<int> copy(searchable);
	while (!copy.empty()) {
		v.push_back(copy.top());
		copy.pop();
	}
	return easyfind(v, value);
}

int	easyfind(std::queue<int> searchable, int value) {
	std::vector<int> v;
	std::queue<int> copy(searchable);
	while (!copy.empty()) {
		v.push_back(copy.front());
		copy.pop();
	}
	return easyfind(v, value);
}

int	easyfind(std::priority_queue<int> searchable, int value) {
	std::vector<int> v;
	std::priority_queue<int> copy(searchable);
	while (!copy.empty()) {
		v.push_back(copy.top());
		copy.pop();
	}
	return easyfind(v, value);
}

#endif // __EASYFIND_HPP__
