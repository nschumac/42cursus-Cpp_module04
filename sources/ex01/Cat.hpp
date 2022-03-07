#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain *brain;
public:
	Cat();
	Cat(Cat const &in);
	Brain *getBrain();
	Cat &operator=(Cat const & in);
	void	makeSound() const;
	~Cat();
};

#endif