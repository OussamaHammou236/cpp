#include "ScalarConverte.hpp"

int ScalarConverte::_sign = 1;
bool ScalarConverte::_isPoint = 0;

void ScalarConverte::convert(std::string str)
{
    (void)str;
}

bool isValid(char c)
{
    return ((c >= '0' && c <= '9') || c == '.' || c == 'f');
}

void ScalarConverte::ParseInput(std::string str)
{
    int _isdigit = 0;
    if (str[0] == '+')
        str = str.c_str() + 1;
    else if (str[0] == '-')
    {
        str = str.c_str() + 1;
        _sign = -1;
    }
    for(int i = 0; str[i] ;i++)
    {
        if (str[i] == 'f' && (str[i + 1] || !_isPoint))
                throw ImpossibleException();
        if (isdigit(str[i]))
            _isdigit = 1;
        else if (str[i] == '.')
        {
            if (_isPoint)
                throw ImpossibleException();
            _isPoint = true;
        }
        else if (!isValid(str[i]))
            throw ImpossibleException();
    }
    if (_isPoint && !_isdigit)
        throw ImpossibleException();

}

const char *ScalarConverte::ImpossibleException::what() const throw()
{
    return "impossible";
}