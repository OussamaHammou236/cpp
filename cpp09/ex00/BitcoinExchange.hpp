#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <fstream>
#include <exception>
#include <map>
#include <sstream>
#include <ctime>
#include <cstdlib>

class BitcoinExchange
{
    private:
        BitcoinExchange();
        BitcoinExchange(BitcoinExchange &instance);
        BitcoinExchange &operator=(BitcoinExchange &instance);
        ~BitcoinExchange();

        static std::map<std::string, float> btc;
        static double Value;
        static std::string Date;
        static void add_line(std::string line);
        static void ParsTheData(std::string data);
        static void CalculateTheBtc();
        static void CheckDate();

    public:
        static void ReadDataBase();
        static void ReadInputFile(std::string filename);
};

#endif