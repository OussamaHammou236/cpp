#include "BitcoinExchange.hpp"

std::map<std::string, float> BitcoinExchange:: btc;
double BitcoinExchange::Value = 0;
std::string BitcoinExchange::Date;
// ortodox form
BitcoinExchange:: BitcoinExchange() {}
BitcoinExchange:: ~BitcoinExchange() {}
BitcoinExchange:: BitcoinExchange(BitcoinExchange &instance)
{
    (void)instance;
}
BitcoinExchange& BitcoinExchange:: operator=(BitcoinExchange &instance)
{
    (void)instance;
    return (*this);
}

void BitcoinExchange:: add_line(std::string line)
{
    float value;
    size_t pos = line.find(',');
    if (pos == std::string::npos)
        return;
    std::stringstream s(line.substr(pos + 1));
    s >> value;
    btc.insert(std::pair<std::string, float>(line.substr(0, pos), value));
}

void BitcoinExchange:: ReadDataBase()
{
    std::ifstream database("data.csv");
    std::string data;
    if (!database.is_open())
        throw "file does not exist";
    while(getline(database, data))
    {
        add_line(data);
    }
    database.close();
}

void BitcoinExchange:: CalculateTheBtc()
{
    std::map<std::string, float>::iterator it = btc.lower_bound(Date);
    float value = it->second;
    if (Date < btc.begin()->first)
        std::cout << Date << " => " << Value << " = " << 0 << std::endl;
    else
        std::cout << Date << " => " << Value << " = " << Value * value << std::endl;
}

void BitcoinExchange:: ParsTheData(std::string data)
{
    std::string date;
    std::string num;
    size_t pos;
    struct tm tm = {};

    pos = data.find('|');
    if (pos == std::string::npos)
        throw std::string("Error: bad input => " + data);
    date = data.substr(0, pos);
    num = data.substr(pos + 1);
    if (num[0] != ' ' || date[date.length() - 1] != ' ')
        throw std::string("Error: your forma not correct, the correct forma is data | value");
    date.erase(date.length() - 1);
    char* end = strptime(date.c_str(), "%Y-%m-%d", &tm);
    if (!end || *end != '\0')
        throw std::string("Error: bbad input => " + date);
    while (num[0] && num[0] == ' ')
        num.erase(0, 1);
    while (num[num.length() - 1] && num[num.length() - 1] == ' ')
        num.erase(num.length() - 1, 1);
    while (date[0] && date[0] == ' ')
        date.erase(0, 1);
    while (date[date.length() - 1] && date[date.length() - 1] == ' ')
        date.erase(date.length() - 1, 1);
    for (int i = 0; num[i]; i++)
        if (!isdigit(num[i]) && num[i] != '.' && num[i] != '-')
            throw std::string("ERROR: entre namber");
    if (!num[0] || !date[0])
        throw std::string("ERROR: you forget data&value");
    Value = atof(num.c_str());
    if (Value < 0)
        throw std::string("Error: not a positive number.");
    if (Value > 1000)
        throw std::string("Error: too large a number.");
    Date = date;
}

void BitcoinExchange:: ReadInputFile(std::string filename)
{
    std::ifstream input(filename);
    std::string data;

    if (!input.is_open())
        throw "the input file does not exist";
    while (getline(input, data))
    {
        try
        {
            ParsTheData(data);
            CalculateTheBtc();
        }
        catch(std::string error)
        {
            std::cerr << error << '\n';
        }
    }
}