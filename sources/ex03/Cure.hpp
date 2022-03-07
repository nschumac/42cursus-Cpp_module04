#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"
#include <iostream>

# define UNUSED(x) (void)(x)

class Cure : public AMateria
{

public:
	Cure();
	Cure(Cure const &in);
	AMateria *clone() const;
	void	use(ICharacter &target);
	Cure &operator=(Cure const & in);
	virtual ~Cure();
};

#endif