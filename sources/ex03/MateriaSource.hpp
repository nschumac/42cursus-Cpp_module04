#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static int const	_sourceSize = 4;
	AMateria	*_source[4];
public:
	MateriaSource();
	void	learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const & type);
	MateriaSource(MateriaSource const &in);
	MateriaSource &operator=(MateriaSource const & in);
	~MateriaSource();
};

#endif