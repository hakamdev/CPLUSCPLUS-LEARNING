/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:17:00 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:26:07 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int		main( int ac, char **av ) {
	
	Karen karen;

	if (ac > 1)
		for(int i = 1; i < ac; i++)
			karen.complain(av[i]);
	return (0);
}