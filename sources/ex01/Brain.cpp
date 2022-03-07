#include "Brain.hpp"

Brain::Brain() {
	LOGN("Brain Default constructor called");
}

Brain::Brain(Brain const & in) {
	*this = in;
	LOGN("Brain Copy constructor called");
}

Brain &Brain::operator=(Brain const & in) {
	LOGN("Brain Assignment operator called");
	for(int i = 0; i < 100; i++)
		this->ideas[i] = in.ideas[i];
	return (*this);
}

Brain::~Brain() {
	LOGN("Brain Destructor called");
}