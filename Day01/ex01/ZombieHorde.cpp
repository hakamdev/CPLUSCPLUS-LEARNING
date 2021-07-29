/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:23:07 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 17:44:14 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string.h>

using std::cout;
using std::endl;

Zombie* zombieHorde( int N, std::string name ) {
	if (N < 0) {
		cout << "Really? -_-" << endl;
		return (nullptr);
	}
	Zombie *_zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		_zombieHorde[i].name() = name;
	return (_zombieHorde);
}