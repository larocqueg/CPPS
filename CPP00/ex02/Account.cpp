/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gde-la-r <gde-la-r@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 15:26:44 by gde-la-r          #+#    #+#             */
/*   Updated: 2025/06/25 15:55:50 by gde-la-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
  return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
  return (_totalAmount);
}

int Account::getNbDeposits(void)
{
  return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
  return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
  _displayTimestamp();
  std::cout << "Accounts: " << getNbAccounts() << "; "
            << "Total: " << getTotalAmount() << "; "
            << "Deposits: " << getNbDeposits() << "; "
            << "Withdrawals: " << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
  _displayTimestamp();

  this->_accountIndex = _nbAccounts++;
  this->_amount = initial_deposit;
  _totalAmount += initial_deposit;
  this->_nbDeposits = 0;
  this->_nbWithdrawals = 0;

  std::cout << "Index: " << this->_accountIndex << "; "
            << "Amount: " << this->_amount << "; "
            << "Created" << std::endl;
}

Account::~Account()
{
  _displayTimestamp();
  std::cout << "Index: " << this->_accountIndex << "; "
            << "Amount: " << this->_amount << "; "
            << "Closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
  _displayTimestamp();
  std::cout << "Index: " << this->_accountIndex << "; "
            << "p_amount: " << this->_amount << "; ";

  this->_amount += deposit;
  this->_nbDeposits++;
  _totalAmount += deposit;
  _totalNbDeposits++;

  std::cout << "Deposit: " << deposit << "; "
            << "Amount: " << this->_amount << "; "
            << "nb_deposits: " << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    
    std::cout << "Index: " << this->_accountIndex << ";"
              << "p_amount: " << this->_amount << ";";

    if (this->_amount < withdrawal)
    {
        std::cout << "Withdrawal:refused" << std::endl;
        return (false);
    }

    this->_amount -= withdrawal;
    _totalAmount -= withdrawal;
    this->_nbWithdrawals++;
    _totalNbWithdrawals++;

    std::cout << "Withdrawal: " << withdrawal << ";"
              << "Amount: " << this->_amount << ";"
              << "nb_withdrawals: " << this->_nbWithdrawals << std::endl;
    return (true);
}

int Account::checkAmount(void) const
{
  return (this->_amount);
}

void Account::displayStatus(void) const
{
  _displayTimestamp();
  std::cout << "Index: " << this->_accountIndex << "; "
            << "Amount: " << this->_amount << "; "
            << "Deposits: " << this->_nbDeposits << "; "
            << "Withdrawals: " << this->_nbWithdrawals << ";" << std::endl;
}

void Account::_displayTimestamp(void)
{
  time_t current = time(NULL);
  struct tm *local = localtime(&current);
  std::cout << "["
            << (local->tm_year + 1900)
            << std::setw(2) << std::setfill('0') << local->tm_mon + 1
            << std::setw(2) << std::setfill('0') << local->tm_mday << "_"
            << std::setw(2) << std::setfill('0') << local->tm_hour
            << std::setw(2) << std::setfill('0') << local->tm_min
            << std::setw(2) << std::setfill('0') << local->tm_sec
            << "] ";
}

