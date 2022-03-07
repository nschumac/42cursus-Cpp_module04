#include "AMateria.hpp"

AMateria::AMateria(std::string const &_type) : _type(_type)
{
	
}

AMateria::AMateria(AMateria const & copy) : _type(copy._type)
{
}

void AMateria::use(ICharacter &target){
	(void)(target);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
	return (this->_type);
}