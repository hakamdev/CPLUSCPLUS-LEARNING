/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:21 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 17:45:22 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int		main( void ) {
	int const	N = 10;

	Zombie	*_zombieHorde = zombieHorde(N, "Eric");
	for (int i = 0; i < N; i++)
		_zombieHorde[i].announce();
	delete [] _zombieHorde;
	return (0);
}