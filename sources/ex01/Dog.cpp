#include "Dog.hpp"

Dog::Dog() {
	this->_type = "Dog";
	this->brain = new Brain();
	LOGN("Dog Default constructor has been called");
}

Dog::Dog(Dog const & in) {
	this->brain = new Brain(*in.brain);
	this->_type = in._type;
	LOGN("Dog Copy constructor has been called");
}

Brain *Dog::getBrain()
{
	return (this->brain);
}

void	Dog::makeSound() const
{
	LOGN("Wuff Wuff");
}


Dog &Dog::operator=(Dog const & in) {
	this->_type = in._type;
	delete this->brain;
	this->brain = new Brain(*in.brain);
	return (*this);
}

Dog::~Dog() {
	delete this->brain;
	LOGN("Dog Destructor has been called");
}