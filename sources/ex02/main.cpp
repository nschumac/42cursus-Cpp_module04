#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <unistd.h>

int main(void)
{
	//Animal test; not possible becasue it is an abstract class
	Animal *animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Dog();
	for (int i = 5; i < 10; i++)
		animals[i] = new Cat();
	for (int i = 0; i < 10; i++)
		delete animals[i];

	Dog	test;
	Dog	test1(test);
	LOGN("-------------------");
	LOGN("Show that copy is deep:")
	LOG("Test : ");
	LOGN(test.getBrain());
	LOG("Test1: ");
	LOGN(test1.getBrain());
	LOGN("-------------------");
	LOGN("-----");
	Dog test3;
	test3 = test;
	LOGN("-------------------");
	LOGN("Show that copy is deep:")
	LOG("Test : ");
	LOGN(test.getBrain());
	LOG("Test3: ");
	LOGN(test3.getBrain());
	LOGN("-------------------");
	LOGN("-----");
	return 0;
}
