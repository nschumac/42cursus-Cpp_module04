#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

# define LOG(x) std::cout << x;
# define LOGN(x) std::cout << x << std::endl;

class WrongAnimal
{
	private:

	protected:
		
		std::string _type;

	public:
		WrongAnimal();
		std::string	getType() const;
		WrongAnimal(WrongAnimal const &in);
		void	makeSound() const;
		WrongAnimal &operator=(WrongAnimal const & in);
		~WrongAnimal();
};

#endif