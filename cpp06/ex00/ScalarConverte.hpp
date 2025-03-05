#ifndef SCALARCONVERTE
#define SCALARCONVERTE

#include <iostream>
#include <string>
#include <exception>

class ScalarConverte : public std::exception
{
    private:
        static bool _isPoint;
        static int _sign;
    public:
        static void convert(std::string str);
        static void ParseInput(std::string str);
        class ImpossibleException : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif