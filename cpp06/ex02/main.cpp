#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

Base * generate(void)
{

	std::cout << "time : " << std::time(0) << std::endl;
	std::srand(std::time(NULL));

	int randomNum = rand() % 3;
	if (randomNum == 1)
		return new A;
	else if (randomNum == 2)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "the actual type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "the actual type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "the actual type is C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "the actual type is A" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "the actual type is B" << std::endl;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "the actual type is C" << std::endl;
	}
	catch(const std::exception& e)
	{}
}

int main()
{
	Base *obj = generate();
	identify(obj);
	identify(*obj);
}