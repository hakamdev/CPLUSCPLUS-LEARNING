/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hakamgo <hakamgo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:09:06 by hakamgo           #+#    #+#             */
/*   Updated: 2021/07/28 18:46:53 by hakamgo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <stdio.h>
#include <iostream>

Account::Account( int initial_deposit ) {
	
}

void	Account::makeDeposit( int deposit ) {

}

bool	Account::makeWithdrawal( int withdrawal ) {
	return true;
}

int		Account::checkAmount( void ) const {
	return 0;
}

void	Account::displayStatus( void ) const {

}

/* STATIC MEMBERS */
int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts( void ) {
	return (Account::_nbAccounts);
}

int		Account::getTotalAmount( void ) {
	return (Account::_totalAmount);
}

int		Account::getNbDeposits( void ) {
	return (Account::_totalNbDeposits);
}

int		Account::getNbWithdrawals( void ) {
	return (Account::_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ) {
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
	Account::_displayTimestamp();
	std::cout	<< " accounts:" << Account::getNbAccounts() << ';'
				<< "total:" << Account::getTotalAmount() << ';'
				<< "deposits:" << Account::getNbDeposits() << ';'
				<< "withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
}

void	Account::_displayTimestamp( void ) {
	time_t		_time;
	struct tm	*_tm;

	time(&_time);
	_tm = localtime(&_time);
	printf(
		"[%d%02d%02d_%02d%02d%02d]", 
		_tm->tm_year + 1900,
		_tm->tm_mon,
		_tm->tm_mday,
		_tm->tm_hour,
		_tm->tm_min,
		_tm->tm_sec
		);
	
}
