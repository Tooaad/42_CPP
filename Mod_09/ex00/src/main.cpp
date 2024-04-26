#include "BitcoinExchange.hpp"

int dataIsValid(const double &price, const std::string &date)
{
    const int year = std::stoi(date.substr(0, 4));
    const int month = std::stoi(date.substr(5, 2));
    const int day = std::stoi(date.substr(8, 2));

    if (date.size() != 10 || date[4] != '-' || date[7] != '-' || year < 0 || month < 1 || month > 12 || day < 1 || day > 31)
    {
        std::cerr << "Error: bad input => " << date << std::endl;
        return 1;
    }

    if (price <= 0)
    {
        std::cerr << "Error: not a posituve number." << std::endl;
        return 1;
    }
    else if (price > INT32_MAX)
    {
        std::cerr << "Error: too large a number." << std::endl;
        return 1;
    }
    return 0;
}

void applyExchange(BitcoinExchange &BitcoinExchange, const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "Error: could not open file." << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        std::string space;
        double price;
        iss >> date >> space >> price;
        if (dataIsValid(price, date))
            continue;
        double rate = BitcoinExchange.getNearestDate(date);
        std::cout << date << " => " << price << " = " << BitcoinExchange.convert(price, rate) << std::endl;
    }
    file.close();
}

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cerr << "Error. could not open file." << std::endl;
        return 1;
    }

    const std::string _filename = "../cpp_09/data.csv";
    BitcoinExchange btcExchange;

    btcExchange.read(_filename);
    applyExchange(btcExchange, argv[1]);

    return 0;
}

