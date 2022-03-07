#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>
# define LOG(x) std::cout << x;
# define LOGN(x) std::cout << x << std::endl;

class Brain
{
private:
	std::string	ideas[100];
public:
	Brain();
	Brain(Brain const &in);
	Brain &operator=(Brain const & in);
	~Brain();
};

#endif