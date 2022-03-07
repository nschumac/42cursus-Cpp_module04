#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){

}

AMateria *Ice::clone() const
{
	return (new Ice());
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::Ice(Ice const & in) : AMateria(in)
{
}

Ice &Ice::operator=(Ice const & in) {
	UNUSED(in);
	return (*this);
}

Ice::~Ice() {

}