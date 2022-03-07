#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	LOGN("WrongAnimal Default constructor has been called");
}

WrongAnimal::WrongAnimal(WrongAnimal const & in) {
	*this = in;
	LOGN("WrongAnimal Copy Constructor has been called");
}

void	WrongAnimal::makeSound() const
{
	LOGN("WrongAnimal Sound");
}
std::string	WrongAnimal::getType() const
{
	return (this->_type);
}
WrongAnimal &WrongAnimal::operator=(WrongAnimal const & in) {
	this->_type = in._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	LOGN("WrongAnimal Destructor has been called");
}