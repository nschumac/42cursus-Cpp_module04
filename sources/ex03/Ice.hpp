#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"
#include <iostream>

# define UNUSED(x) (void)(x)

class Ice : public AMateria
{

public:
	Ice();
	Ice(Ice const &in);
	AMateria *clone() const;
	void	use(ICharacter &target);
	Ice &operator=(Ice const & in);
	virtual ~Ice();
};

#endif