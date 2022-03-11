/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 18:20:03 by ehakam            #+#    #+#             */
/*   Updated: 2022/01/07 05:08:29 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int		main(void) {
	
	DiamondTrap dt("Mosh");
	dt.whoAmI();
	dt.attack("Target");
	dt.takeDamage(2);
	dt.beRepaired(2);
	dt.guardGate();
	dt.highFivesGuys();

	
	return (0);
}