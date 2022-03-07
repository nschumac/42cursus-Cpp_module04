#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
	LOGN("Cat Default constructor has been called");
}

Cat::Cat(Cat const & in) {
	*this = in;
	LOGN("Cat Copy constructor has been called");
}



void	Cat::makeSound() const
{
	LOGN("MIAU MIAU");
}

Cat &Cat::operator=(Cat const & in) {
	this->_type = in._type;
	return (*this);
}

Cat::~Cat() {
	LOGN("Cat Destructor has been called");
}