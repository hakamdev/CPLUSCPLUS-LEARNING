/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Program.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:08:18 by ehakam            #+#    #+#             */
/*   Updated: 2021/07/17 20:40:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Hakam.hpp"

int		main( void ) {
	Hakam *h4 = new Hakam(40, "Hakam", "Y123456");

	std::cout << h4->getName() << " is " << h4->getAge()
				<< " years old, id: " << h4->getId() << std::endl;

	h4->setAge(300);
	h4->setId("SSSSSSS");
	h4->setName("Whyyyy");

	std::cout << h4->getName() << "\tis\t\t" << h4->getAge()
				<< "\tyears old, id:\t" << h4->getId() << std::endl;

	delete h4;
	return (0);
}