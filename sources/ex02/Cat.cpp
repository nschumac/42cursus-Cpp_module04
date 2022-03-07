#include "Cat.hpp"

Cat::Cat(){
	this->_type = "Cat";
	this->brain = new Brain();
	LOGN("Cat Default constructor has been called");
}

Cat::Cat(Cat const & in) {
	this->brain = new Brain(*in.brain);
	this->_type = in._type;
	LOGN("Cat Copy constructor has been called");
}

Brain *Cat::getBrain()
{
	return (this->brain);
}

void	Cat::makeSound() const
{
	LOGN("MIAU MIAU");
}

Cat &Cat::operator=(Cat const & in) {
	this->_type = in._type;
	delete this->brain;
	this->brain = new Brain(*in.brain);;
	return (*this);
}

Cat::~Cat() {
	delete this->brain;
	LOGN("Cat Destructor has been called");
}