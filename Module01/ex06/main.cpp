/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:33:14 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:32:16 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

#define BGBLUE "\033[1;44m"
#define CBlACK "\033[1;30m"
#define CRESET "\033[1;0m"

enum Level {
	DEBUG = 1,
	INFO = 2,
	WARNING = 3,
	ERROR = 4,
	ELSE = 5
};

Level	getLevel(std::string level) {
	Level l = ELSE;
	level.compare("DEBUG") == 0 && (l = DEBUG);
	level.compare("INFO") == 0 && (l = INFO);
	level.compare("WARNING") == 0 && (l = WARNING);
	level.compare("ERROR") == 0 && (l = ERROR);
	return (l);
}

int		main( int ac, char *av[] ) {
	if (ac != 2)
		return (1);
	Karen karen;
	switch (getLevel(av[1]))
	{
	case DEBUG:
		karen.complain("DEBUG");
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
		break;
	case INFO:
		karen.complain("INFO");
		karen.complain("WARNING");
		karen.complain("ERROR");
		break;
	case WARNING:
		karen.complain("WARNING");
		karen.complain("ERROR");
		break;
	case ERROR:
		karen.complain("ERROR");
		break;
	default:
		std::cout	<< BGBLUE << CBlACK
				<< "[ Probably complaining about insignificant problems ]"
				<< CRESET
				<< std::endl << std::endl;
		break;
	}
}