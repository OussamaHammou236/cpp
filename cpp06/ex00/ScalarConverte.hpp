#ifndef SCALARCONVERTE
#define SCALARCONVERTE

#include <iostream>
#include <string>
#include <exception>
#include <climits>
#include <cfloat>
#include <cstdlib>
#include <cmath>

class ScalarConverte : public std::exception
{
    private:
        static bool _isPoint;
        static int _sign;
    public:
        static void convert(std::string str);
        static void ParseInput(std::string str);
        static void handle_char(int c);
        static void handle_number(double i);
        class ImpossibleException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

bool isValid(char c);

#endif