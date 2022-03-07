#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	LOGN("Dog Default constructor has been called");
}

Dog::Dog(Dog const & in) {
	*this = in;
	LOGN("Dog Copy constructor has been called");
}

void	Dog::makeSound() const
{
	LOGN("Wuff Wuff");
}


Dog &Dog::operator=(Dog const & in) {
	this->_type = in._type;
	return (*this);
}

Dog::~Dog() {
	LOGN("Dog Destructor has been called");
}