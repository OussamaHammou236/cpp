#include "Span.hpp"

int main()
{
    try
    {
        Span span(3);
        span.addNumber(32);
        span.addNumber(21);
        span.addNumber(213);
        span.print_numbers();
        std::cout << "longest span: " << span.longestSpan() << " shortest span: " <<span.shortestSpan() <<std::endl;
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
