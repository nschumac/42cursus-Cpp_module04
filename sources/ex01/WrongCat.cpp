#include "WrongCat.hpp"

WrongCat::WrongCat(){
	this->_type = "WrongCat";
	LOGN("WrongCat Default constructor has been called");
}

WrongCat::WrongCat(WrongCat const & in) {
	*this = in;
	LOGN("WrongCat Copy constructor has been called");
}

void	WrongCat::makeSound() const
{
	LOGN("MIAU MIAU");
}

WrongCat &WrongCat::operator=(WrongCat const & in) {
	this->_type = in._type;
	return (*this);
}

WrongCat::~WrongCat() {
	LOGN("WrongCat Destructor has been called");
}