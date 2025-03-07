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

void ScalarConverte:: handle_char(int c)
{
    if (isprint(c))
    {
        char cc = static_cast<char>(c);
        std::cout << "char: '" << cc << "'" << std::endl;
    }
    else
        std::cout << "char: Non displayable" << std::endl;
    int i = static_cast<int>(c);
    float f = static_cast<float>(c);
    double d = static_cast<double>(c);
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << f << ".0f" << std::endl;
    std::cout << "double: " << d << ".0" << std::endl;

}

void ScalarConverte:: handle_number(double i)
{
    double intpart;
    double frac = modf(i, &intpart);

    if (i > INT_MAX || i < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (i > FLT_MAX || i < FLT_MIN)
        std::cout << "float: impossible" << std::endl;
    else if (frac != 0.0)
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    if (frac != 0.0)
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}