/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtani <mtani@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:51:31 by mtani             #+#    #+#             */
/*   Updated: 2024/06/20 15:58:53 by mtani            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	std::cout << "[" << tm.tm_year + 1900 << tm.tm_mon + 1 << tm.tm_mday << "_" << tm.tm_hour << tm.tm_min << tm.tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
	_nbAccounts++;
	_totalAmount = _totalAmount + initial_deposit;
	_amount = initial_deposit;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	_nbDeposits++;
	_totalNbDeposits++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits << std::endl;
	_totalAmount = _totalAmount + deposit;
	_amount = _amount + deposit;
}

bool	Account::makeWithdrawal(int withdrawal) {
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:";
	if (withdrawal > _amount)
	{
		std::cout << "refused" << std::endl;
		return false;
	}
	std::cout << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	_totalAmount = _totalAmount - withdrawal;
	_amount = _amount - withdrawal;
	return true;
}

int		Account::getNbAccounts(void) {
	return _nbAccounts;
}

int		Account::getTotalAmount(void) {
	return _totalAmount;
}

int		Account::getNbDeposits(void) {
	return _totalNbDeposits;
}

int		Account::getNbWithdrawals(void) {
	return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int		Account::checkAmount() const {
	return _amount;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}
