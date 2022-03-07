#ifndef WrongCat_HPP
# define WrongCat_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
public:
	WrongCat();
	WrongCat(WrongCat const &in);
	WrongCat &operator=(WrongCat const & in);
	void	makeSound() const;
	~WrongCat();
};

#endif