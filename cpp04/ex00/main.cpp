#include"Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete i;
    delete j;
    delete meta;

    std::cout << "-----------------------" << std::endl;

    const WrongAnimal *animal = new WrongAnimal();
    const WrongAnimal *cat = new WrongCat();

    animal->makeSound();
    cat->makeSound();

    delete animal;
    delete cat;

return 0;
}