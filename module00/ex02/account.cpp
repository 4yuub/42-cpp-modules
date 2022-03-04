#include <iostream>
#include "Account.hpp"
#include <ctime>
#include <iomanip>

// Constructor && Destarctor:
Account::Account( int initial_deposit ) {
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_totalAmount += this->_amount;
	this->_nbAccounts++;
	this->_nbDeposits= 0;
	this->_nbWithdrawals= 0;
}

Account::~Account( void ) {
	this->_nbAccounts = 0;
	this->_totalAmount = 0;
	this->_totalNbDeposits = 0;
	this->_totalNbWithdrawals = 0;
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

void Account::displayAccountsInfos( void ) {
	//TODO: display...
}

// Transtactions:
void Account::makeDeposit( int deposit ) {
	if (deposit < 0)
		return ;
	this->_nbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal ) {
	if (withdrawal > this->_amount)
		return false;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	return (true);
}

void Account::displayStatus( void ) const {
	this->_displayTimestamp();
	std::cout << " " << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "deposits:" << this->_nbDeposits << ";";
	std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

// Display data:
void	Account::_displayTimestamp( void ) {
	static std::time_t time_now = std::time(nullptr);
	std::cout << std::put_time(std::localtime(&time_now), "[%y%m%d_%OH%OM%OS]");
}
