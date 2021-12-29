/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:23:07 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 00:59:54 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 0) {
		std::cout << "Really? -_-" << std::endl;
		return (nullptr);
	}
	Zombie *_zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		_zombieHorde[i].name() = name;
	return (_zombieHorde);
}