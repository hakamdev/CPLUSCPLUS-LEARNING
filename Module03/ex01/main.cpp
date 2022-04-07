/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:03 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/06 23:16:13 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int		main(void) {
	std::cout << "======================= Constructors Tests =======================" << std::endl;
	ScavTrap	t1("SCAV 1");
	ScavTrap	t2( t1 );

	std::cout << "======================= Methods Tests =======================" << std::endl;
	t1.attack("Enemy 1");
	t1.takeDamage(5);
	t1.beRepaired(30);
	t1.guardGate();

	return (0);
}