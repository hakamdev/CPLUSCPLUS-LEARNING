/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:23:07 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 18:33:42 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N <= 0) {
		std::cout << "Really? -_-" << std::endl;
		return (nullptr);
	}
	Zombie *_zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		_zombieHorde[i].setName(name);
	return (_zombieHorde);
}