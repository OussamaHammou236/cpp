#include "ScalarConverte.hpp"

int ScalarConverte::_sign = 1;
bool ScalarConverte::_isPoint = 0;

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
    char cc = static_cast<char>(c);
    if (isprint(cc))
        std::cout << "char: '" << cc << "'" << std::endl;
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

    if (isprint(static_cast<char>(i)))
        std::cout << "char: '" << static_cast<char>(i) << "'" << std::endl;
    else
        std::cout << "char: Non displayable" << std::endl;
    if (i > INT_MAX || i < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(i) << std::endl;
    if (i > FLT_MAX)
        std::cout << "float: impossible" << std::endl;
    if (frac != 0.0)
        std::cout << "float: " << static_cast<float>(i) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    if (frac != 0.0)
        std::cout << "double: " << static_cast<double>(i) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverte:: convert(std::string arg)
{
    for (int i = 0;arg[i]; i++)
        if (!isprint(arg[i]))
            throw ImpossibleException();
    if (arg ==  "nan" || arg == "-inff" || arg == "+inff" || arg == "inf")
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
        std::cout << "float: " << arg << std::endl;
        std::cout << "double: " << arg << std::endl;
    }
    else if (arg.length() > 1 && (isValid(arg[0]) || arg[0] == '+' || arg[0] == '-'))
    {
        ScalarConverte::ParseInput(arg);
        ScalarConverte::handle_number(atof(arg.c_str()));
    }
    else 
        ScalarConverte::handle_char(arg[0]);
}