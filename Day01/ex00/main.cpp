/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:02:02 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:34:01 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main( void ) {
	/*
	** Creating Zombies on the Stack using randomChump function!
	** The Zombies will be created, announced and destroyed as the function exits;
	*/
	std::cout << std::endl << "Creating Zombies on the Stack using randomChump function!" << std::endl;
	randomChump("Eren");
	randomChump("Mikasa");
	randomChump("Armin");
	
	/*
	** Creating Zombie on the Heap using newZombie function;
	** The Zombies will be allocated and returned as a pointer,
	** and will only be destryed when delete is called
	*/
	std::cout << std::endl <<  "Creating Zombie on the Heap using newZombie function!" << std::endl;
	Zombie *z1 = newZombie("Light");
	Zombie *z2 = newZombie("Shinigami");
	Zombie *z3 = newZombie("L");
	
	z1->announce();	
	z2->announce();	
	z3->announce();	

	delete z1;
	delete z2;
	delete z3;
	
	return (0);
}