#include "Span.hpp"

int main()
{
    try
    {
        Span<std::vector<int>> span(3);
        span.addNumber(32);
        span.addNumber(21);
        span.addNumber(213);
        span.print_numbers();
        std::cout << span.longestSpan() << "  " <<span.shortestSpan() <<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
