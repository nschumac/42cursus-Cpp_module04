#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"
class Dog : public Animal
{
private:
	Brain *brain;
public:
	Dog();
	Dog(Dog const &in);
	Brain *getBrain();
	Dog &operator=(Dog const & in);
	void makeSound() const;
	~Dog();
};

#endif