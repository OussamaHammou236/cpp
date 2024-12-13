#include"Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    int size = 10;
    Animal *animal[size];

    for (int cats_size = 0; cats_size < size / 2; cats_size++)
        animal[cats_size] = new Cat();
    
    for (int dogs_size = size / 2; dogs_size < size; dogs_size++)
        animal[dogs_size] = new Dog();

    for (int i = 0; i < size; i++)
        std::cout << animal[i]->getType() << std::endl;

    for (int des = 0; des < size; des++)
        delete animal[des];
    return 0;
}