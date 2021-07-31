/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:17:00 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/30 16:32:41 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

int		main( int ac, char *av[] ) {
	
	Karen karen;

	if (ac > 1)
		for(int i = 1; i < ac; i++)
			karen.complain(av[i]);
	return (0);
}