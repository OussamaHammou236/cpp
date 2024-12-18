#include"Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    PrefixAnimal *cat = new Cat();
    PrefixAnimal *dog = new Dog();

    cat->makeSound();
    dog->makeSound();

    std::cout << cat->getType() << std::endl;
    std::cout << dog->getType() << std::endl;

    return 0;
} 