#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

# define LOG(x) std::cout << x;
# define LOGN(x) std::cout << x << std::endl;

class Animal
{
	private:

	protected:
		
		std::string _type;

	public:
		Animal();
		std::string	getType() const;
		Animal(Animal const &in);
		virtual void	makeSound() const = 0;
		Animal &operator=(Animal const & in);
		virtual ~Animal();
};

#endif