#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(Cat const &in);
	Cat &operator=(Cat const & in);
	void	makeSound() const;
	~Cat();
};

#endif