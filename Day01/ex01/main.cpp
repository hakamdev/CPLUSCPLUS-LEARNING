/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 16:02:21 by hakamgo           #+#    #+#             */
/*   Updated: 2022/02/21 18:35:36 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int		main( void ) {
	int const	N = 10;

	Zombie	*zombieHorde1 = zombieHorde(N, "Eric");
	for (int i = 0; i < N; i++)
		zombieHorde1[i].announce();
	delete [] zombieHorde1;
	return (0);
}