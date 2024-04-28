#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
    // Constructor
}

BitcoinExchange::~BitcoinExchange()
{
    // Destructor
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    // Copy constructor
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    // Assignment operator
    if (this != &other)
    {
        _data = other._data;
        _result = other._result;
    }
    return *this;
}

bool BitcoinExchange::dateExist(const std::string &date)
{
    // Check if a date exists in the map
    return _data.find(date) != _data.end();
}

void BitcoinExchange::add(const std::string &date, const double &price)
{
    // Add a date and price to the map
    _data[date] = price;
}

double BitcoinExchange::getNearestDate(const std::string &date)
{
    // Get the price of a date or the nearest lower date
    if (!this->dateExist(date))
    {
        std::map<std::string, double>::iterator it = _data.lower_bound(date);
        if (it != _data.begin() && it->first > date)
        {
            it--;
        }
        if (it == _data.begin())
        {
            return 0;
        }
        return it->second;
    }
    return _data[date];
}

double BitcoinExchange::convert(const double &amount, const double &rate)
{
    // Convert an amount to a certain date
    return amount * rate;
}

int BitcoinExchange::size()
{
    // Return the size of the map
    return _data.size();
}

void BitcoinExchange::read(const std::string &filename)
{
    std::ifstream file(filename);
    if (!file.is_open())
    {
        std::cerr << "error: file not found" << std::endl;
        return;
    }

    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        std::istringstream iss(line);
        std::string date;
        double price;
        std::string delimiter = ",";
        try
        {
            size_t pos = line.find(delimiter);
            date = line.substr(0, pos);
            price = std::stod(line.substr(pos + delimiter.length()));
            this->add(date, price);
        } catch (const std::exception &e)
        {
            std::cerr << "Error bad input on csv " << std::endl;
        }
    }
    file.close();
}