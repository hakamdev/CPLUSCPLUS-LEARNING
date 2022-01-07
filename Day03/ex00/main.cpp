/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:15:58 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 04:09:58 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int		main(void) {
	std::cout << "======================= Constructors Tests =======================" << std::endl;
	ClapTrap	clapTrap2("CT 1");
	ClapTrap	clapTrap3 = clapTrap2;
	std::cout << "======================= Methods Tests =======================" << std::endl;
	clapTrap2.attack("Enemy 1");
	clapTrap2.attack("Enemy 2");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(30);
	return (0);
}