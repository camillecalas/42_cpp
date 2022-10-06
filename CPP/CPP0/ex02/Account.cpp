#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime> 

/*************** CONSTRUCTOR | DESTRUCTOR ***************/
Account::Account(int initial_deposit): _amount(initial_deposit)
{
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";created" << std::endl;
	return ;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";closed" << std::endl;
	return ;
}

/************************ ATTRIBUTS ************************/
int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


/************************ METHODES ************************/
int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp()
{
	time_t 	now;
	tm		*gmtm;

	now = time(0);
	gmtm = gmtime(&now);

	std::cout << "[";
	std::cout << (gmtm->tm_year + 1900) << std::setw(2) << (gmtm->tm_mon + 1) << std::setw(2) << gmtm->tm_mday;
	std::cout << "_";
	std::cout << std::setfill('0') << std::setw(2) << (gmtm->tm_hour + 2);
	std::cout << std::setfill('0') << std::setw(2) << gmtm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << gmtm->tm_sec;
	std::cout << "] ";
}

void	Account::makeDeposit(int deposit)
{
	_totalNbDeposits++;
	_totalAmount += deposit;
	_nbDeposits++;

	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << _amount;
	_amount += deposit;
	std::cout << ";deposit:" << _totalNbDeposits;
	std::cout << ";amount:" << _amount;
	std::cout << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (_amount < withdrawal)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		_totalNbWithdrawals++;
		_nbWithdrawals++;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex;
		std::cout << ";p_amount:" << _amount;
		std::cout << ";withdrawal:" << withdrawal;
		_amount -=withdrawal;
		std::cout << ";amount:" << _amount;
		std::cout << ";nb_withdrawal:" << _nbWithdrawals << std::endl;
	}
	return (true);
}

int	Account::checkAmount(void)const
{
	std::cout << _amount;
	return (_amount);
}

void	Account::displayStatus()const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";amount:" << _amount;
	std::cout << ";deposit:" << _nbDeposits;
	std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposit:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}