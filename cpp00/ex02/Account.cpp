#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

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

int	Account::getNbDeposits( void )
{
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
    return(_totalNbWithdrawals);
}

void Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount
              << ";deposits:" << _totalNbDeposits 
              << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}



int		Account::checkAmount( void ) const
{
    return (_amount);
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account:: makeDeposit( int deposit )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
    _amount += deposit;
    _nbDeposits++;
    std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" <<_nbDeposits << std::endl;
    _totalAmount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    if ( _amount - withdrawal < 0)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused" << std::endl;
        return false;
    }
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
    _amount -= withdrawal;
    _nbWithdrawals++;
    std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalNbDeposits++;
    _totalAmount -= withdrawal;
    return true;
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(0);
    std::tm* localTime = std::localtime(&now);


    std::cout << "[" << (1900 + localTime->tm_year)
        << std::setw(2) << std::setfill('0') << (localTime->tm_mon + 1)
        << std::setw(2) << std::setfill('0') << localTime->tm_mday
        << "_"
        << std::setw(2) << std::setfill('0') << localTime->tm_hour
        << std::setw(2) << std::setfill('0') << localTime->tm_min
        << std::setw(2) << std::setfill('0') << localTime->tm_sec;
    std::cout  << "] ";
}


Account:: Account( int initial_deposit )
{
    _accountIndex = _nbAccounts;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";amount:" << _amount
    << ";created" << std::endl;
    _nbAccounts++;
}

Account:: ~Account( void )
{
    _displayTimestamp();
    std::cout << "index:" <<  _accountIndex << ";amount:" << _amount
    << ";closed" << std::endl;    
}

Account:: Account(void)
{
    
}