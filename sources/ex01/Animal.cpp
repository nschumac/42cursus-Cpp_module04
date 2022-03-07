#include "Animal.hpp"

Animal::Animal() {
	LOGN("Animal Default constructor has been called");
}

Animal::Animal(Animal const & in) {
	*this = in;
	LOGN("Animal Copy Constructor has been called");
}

void	Animal::makeSound() const
{
	LOGN("Animal Sound");
}
std::string	Animal::getType() const
{
	return (this->_type);
}
Animal &Animal::operator=(Animal const & in) {
	this->_type = in._type;
	return (*this);
}

Animal::~Animal() {
	LOGN("Animal Destructor has been called");
}