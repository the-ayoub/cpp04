#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
    const int arraySize = 4;
    Animal* zoo[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        if (i < arraySize / 2)
            zoo[i] = new Dog();
        else
            zoo[i] = new Cat();
    }

    for (int i = 0; i < arraySize; i++)
    {
        delete zoo[i];
    }
    Dog* dogA = new Dog();
    Dog* dogB = new Dog(*dogA);
    delete dogA;
    delete dogB; 

    return 0;
}