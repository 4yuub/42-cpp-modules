#include <iostream>
#include "Account.hpp"
#include <ctime>
#include <iomanip>

// Constructor && Destarctor:

/*
	[19920104_091532] index:0;amount:42;created
*/
Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_totalAmount += this->_amount;
	this->_nbAccounts++;
	this->_nbDeposits= 0;
	this->_nbWithdrawals= 0;
	this->_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "created" << std::endl;
}

/*
	[19920104_091532] index:7;amount:8942;closed
*/
Account::~Account( void ) {
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
	this->_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

// Geters:
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}

// Transtactions:

/*
	[19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
*/
void Account::makeDeposit( int deposit ) {
	if (deposit < 0)
		return ;
	this->_nbDeposits++;
	this->_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "deposit:" << deposit << ";";
	this->_amount += deposit;
	this->_totalAmount += deposit;
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}


/*
	[19920104_091532] index:4;p_amount:1321;withdrawal:76;amount:1245;nb_withdrawals:1
	[19920104_091532] index:5;p_amount:23;withdrawal:refused
*/
bool Account::makeWithdrawal( int withdrawal ) {
	this->_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "p_amount:" << this->_amount << ";";
	std::cout << "withdrawal:";
	if (withdrawal > this->_amount) {
		std::cout << "refused" << std::endl;
		return false;
	}
	this->_nbWithdrawals++;
	this->_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_totalAmount -= withdrawal;
	std::cout << withdrawal << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return (true);
}


// Display data:
void	Account::_displayTimestamp( void ) {
	static std::time_t time_now = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&time_now), "[%y%m%d_%OH%OM%OS]");
}

/*
	[19920104_091532] index:0;amount:47;deposits:1;withdrawals:0
*/
void Account::displayStatus( void ) const {
	this->_displayTimestamp();
	std::cout << " ";
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

/*	
	[19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
*/
void Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << " ";
	std::cout << "accounts:" << getNbAccounts() << ";";
	std::cout << "total:" << getTotalAmount() << ";";
	std::cout << "deposits:" << getNbDeposits() << ";";
	std::cout << "withdrawals:" << getNbWithdrawals() << std::endl;
}
