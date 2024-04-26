#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange {
    private:
        std::map<std::string, double> _data;
        std::map<std::string, double> _result;

    public:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);

        bool dateExist(const std::string &date);
        double getNearestDate(const std::string &date);
        double convert(const double &amount, const double &date);
        int size();
        void add(const std::string &date, const double &price);
        void read(const std::string &filename);
};


// Print an amount on certain date
// Store the different prices/dates to evaluate

// Get a file with certain dates to multiply the values of the given database


// Read the input file apply a divide and conquer to find the best approximation


// With 2 list seems a good approximation since data does not increase

// Multimap seems a good idea to store the data too

// map

