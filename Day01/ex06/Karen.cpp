/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/30 17:33:20 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/30 18:07:40 by hakamgo          ###   ########.fr       */
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

using std::cout;
using std::endl;

Karen::Karen( void ) {
	//cout << "Karen Created!" << endl;
}

Karen::~Karen( void ) {
	//cout << "Karen Destroyed!" << endl;
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
	cout	<< BGGREEN << CBlACK
			<< "[ DEBUG ]" << endl
			<< CRESET << CGREEN
			<< "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI just love it!"
			<< CRESET
			<< endl << endl;
}

void	Karen::info( void ) {
	cout	<< CBlACK << BGCYAN
			<< "[ INFO ]" << endl
			<< CRESET << CCYAN
			<< "I cannot believe adding extra bacon cost more money.\nYou don’t put enough! If you did I would not have to ask for it!"
			<< CRESET
			<< endl << endl;
}

void	Karen::warning( void ) {
	cout	<< BGYELLOW << CBlACK
			<< "[ WARNING ]" << endl
			<< CRESET << CYELLOW
			<< "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month."
			<< CRESET
			<< endl << endl;
}

void	Karen::error( void ) {
	cout	<< BGRED << CBlACK
			<< "[ ERROR ]" << endl
			<< CRESET << CRED
			<< "This is unacceptable, I want to speak to the manager now."
			<< CRESET
			<< endl << endl;
}
