/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 13:16:57 by hakamgo           #+#    #+#             */
/*   Updated: 2021/12/29 01:14:42 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"
#include <iostream>

#define CRESET "\033[1;0m"
#define CBlACK "\033[1;30m"
#define CRED "\033[1;31m"
#define CGREEN "\033[1;32m"
#define CYELLOW "\033[1;33m"
#define CBLUE "\033[1;34m"
#define CCYAN "\033[1;36m"
#define CWHITE "\033[1;36m"

#define BGBlACK "\033[1;40m"
#define BGRED "\033[1;41m"
#define BGGREEN "\033[1;42m"
#define BGYELLOW "\033[1;43m"
#define BGBLUE "\033[1;44m"
#define BGCYAN "\033[1;46m"
#define BGWHITE "\033[1;46m"

Karen::Karen( void ) {
	std::cout << "Karen Created!" << std::endl;
}

Karen::~Karen( void ) {
	std::cout << "Karen Destroyed!" << std::endl;
}

void	Karen::complain( std::string level ) {
	funPtr = nullptr;
	level.compare("DEBUG") == 0 && (funPtr = &Karen::debug);
	level.compare("INFO") == 0 && (funPtr = &Karen::info);
	level.compare("WARNING") == 0 && (funPtr = &Karen::warning);
	level.compare("ERROR") == 0 && (funPtr = &Karen::error);
	if (funPtr != nullptr)
		(this->*funPtr)();
}

void	Karen::debug( void ) {
	std::cout	<< BGGREEN << CBlACK
			<< "Debug:" << std::endl
			<< CRESET << CGREEN
			<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!"
			<< CRESET
			<< std::endl;
}

void	Karen::info( void ) {
	std::cout	<< CBlACK << BGCYAN
			<< "Info:" << std::endl
			<< CRESET << CCYAN
			<< "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!"
			<< CRESET
			<< std::endl;
}

void	Karen::warning( void ) {
	std::cout	<< BGYELLOW << CBlACK
			<< "Warning:" << std::endl
			<< CRESET << CYELLOW
			<< "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month."
			<< CRESET
			<< std::endl;
}

void	Karen::error( void ) {
	std::cout	<< BGRED << CBlACK
			<< "Error:" << std::endl
			<< CRESET << CRED
			<< "This is unacceptable, I want to speak to the manager now."
			<< CRESET
			<< std::endl;
}
