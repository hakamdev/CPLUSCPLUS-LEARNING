/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 15:02:02 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/29 16:05:23 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

using std::cout;
using std::endl;

Zombie*	newZombie( std::string name );
void	randomChump( std::string name );

int		main( void ) {
	/*
	** Creating Zombies on the Stack using randomChump function!
	** The Zombies will be created, announced and destroyed as the function exits;
	*/
	cout << endl << "Creating Zombies on the Stack using randomChump function!" << endl;
	randomChump("Eren");
	randomChump("Mikasa");
	randomChump("Armin");
	
	/*
	** Creating Zombie on the Heap using newZombie function;
	** The Zombies will be allocated and returned as a pointer,
	** and will only be destryed when delete is called
	*/
	cout << endl <<  "Creating Zombie on the Heap using newZombie function!" << endl;
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