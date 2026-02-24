#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    std::cout << "\n--- 1. GOOD ANIMALS (Polymorphism Works) ---" << std::endl;
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "\nTypes:" << std::endl;
    std::cout << "j is a: " << j->getType() << " " << std::endl;
    std::cout << "i is a: " << i->getType() << " " << std::endl;
    std::cout << "\nSounds:" << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    std::cout << "\n--- 2. WRONG ANIMALS (No Polymorphism) ---" << std::endl;
    const WrongAnimal* wrongMeta = new WrongAnimal();
    const WrongAnimal* wrongI = new WrongCat();
    std::cout << "\nTypes:" << std::endl;
    std::cout << "wrongI is a: " << wrongI->getType() << " " << std::endl;
    std::cout << "\nSounds:" << std::endl;
    wrongI->makeSound();
    wrongMeta->makeSound();

    std::cout << "\n--- 3. CLEANING UP MEMORY ---" << std::endl;
    delete meta;
    delete j;
    delete i;
    delete wrongMeta;
    delete wrongI;

    return 0;
}