/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehakam <ehakam@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:09:06 by ehakam            #+#    #+#             */
/*   Updated: 2022/02/15 16:35:59 by ehakam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

Account::Account( int initial_deposit ) :
	_accountIndex(Account::_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0)
{
	// [19920104_091532] index:0;amount:42;created
	Account::_totalAmount += _amount;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "created" << std::endl;
}

Account::Account( void ) { }

Account::~Account( void ) {
	//[19920104_091532] index:0;amount:47;closed
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	int	const	_prev_amount = _amount;

	_amount += deposit;
	_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _prev_amount << ';'
				<< "deposit:" << deposit << ';'
				<< "amount:" << _amount << ';'
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	int const	_prev_amount = _amount;

	if (withdrawal > _amount) {
		Account::_displayTimestamp();
		std::cout	<< " index:" << _accountIndex << ';'
					<< "amount:" << _amount << ';'
					<< "withdrawal:" << "refused"
					<< std::endl;
		return (false);
	}
	_amount -= withdrawal;
	_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _prev_amount << ';'
				<< "withdrawal:" << withdrawal << ';'
				<< "amount:" << _amount << ';'
				<< "nb_withdrawals:" << _nbWithdrawals
				<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const {
	return (_amount);
}

void	Account::displayStatus( void ) const {
	// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	Account::_displayTimestamp();
	std::cout	<< " index:" << _accountIndex << ';'
				<< "amount:" << _amount << ';'
				<< "deposits:" << _nbDeposits << ';'
				<< "withdrawals:" << _nbWithdrawals
				<< std::endl;
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
	time_t		ttime;
	struct tm	*tm;

	time(&ttime);
	tm = localtime(&ttime);

	std::cout << "[";
	std::cout << std::setfill('0') << std::setw(4) << tm->tm_year + 1900;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << tm->tm_sec;
	std::cout << "]";
}
