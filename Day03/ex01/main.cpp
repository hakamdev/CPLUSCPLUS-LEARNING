/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:03 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 03:22:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void) {
	std::cout << "======================= Constructors Tests =======================" << std::endl;
	ClapTrap	clapTrap1;
	ClapTrap	clapTrap2("CT 1");
	ClapTrap	clapTrap3 = clapTrap2;
	//ClapTrap	clapTrap4(clapTrap2);
	std::cout << "======================= Methods Tests =======================" << std::endl;
	clapTrap2.attack("Enemy 1");
	clapTrap2.attack("Enemy 2");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(30);

	// TODO: add ScavTrap and FragTrap Tests
	
	return (0);
}