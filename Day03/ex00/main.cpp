/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/04 14:15:58 by ehakam            #+#    #+#             */
/*   Updated: 2021/09/04 19:29:39 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

using std::cout;
using std::endl;

int		main(void) {
	cout << "======================= Constructors Tests =======================" << endl;
	ClapTrap	clapTrap1;
	ClapTrap	clapTrap2("CT 1");
	ClapTrap	clapTrap3 = clapTrap2;
	//ClapTrap	clapTrap4(clapTrap2);
	cout << "======================= Methods Tests =======================" << endl;
	clapTrap2.attack("Enemy 1");
	clapTrap2.attack("Enemy 2");
	clapTrap2.takeDamage(5);
	clapTrap2.beRepaired(30);
	
	return (0);
}