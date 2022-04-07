/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:03 by ehakam            #+#    #+#             */
/*   Updated: 2022/04/07 00:15:10 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int		main(void) {
	
	std::cout << "======================= Diamond Constructors Tests =======================" << std::endl;
	DiamondTrap dt("mosh");
	DiamondTrap dt2( dt );

	std::cout << std::endl << "======================= Diamond Methods Tests =======================" << std::endl;
	dt.whoAmI();
	dt.attack("Target");
	dt.takeDamage(2);
	dt.beRepaired(2);
	dt.guardGate();
	dt.highFivesGuys();

	std::cout << std::endl << "======================= Destructors =======================" << std::endl;

	return (0);
}
