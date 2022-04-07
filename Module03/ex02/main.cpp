/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:03 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/06 23:43:06 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int		main(void) {
	std::cout << "======================= Scav Constructors Tests =======================" << std::endl;
	ScavTrap	t1("SCAV 1");
	ScavTrap	t2( t1 );

	std::cout << "======================= Frag Constructors Tests =======================" << std::endl;
	FragTrap	ft1("FRAG 1");
	FragTrap	ft2( ft1 );

	std::cout << "======================= Scav Methods Tests =======================" << std::endl;
	t1.attack("Enemy 1");
	t1.takeDamage(5);
	t1.beRepaired(30);
	t1.guardGate();
	
	std::cout << "======================= Frag Methods Tests =======================" << std::endl;
	ft1.attack("Enemy 1");
	ft1.takeDamage(5);
	ft1.beRepaired(30);
	ft1.highFivesGuys();

	return (0);
}
