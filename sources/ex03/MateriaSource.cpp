#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {

	for (int i = 0; i < _sourceSize; i++)
		_source[i] = NULL;

}

void	MateriaSource::learnMateria(AMateria *materia)
{
	for (int i = 0; i < _sourceSize; i++)
	{
		if (_source[i] == NULL)
		{
			_source[i] = materia->clone();
			break ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < _sourceSize; i++)
	{
		if (_source[i] != NULL && _source[i]->getType() == type)
			return (_source[i]->clone());
	}
	return (0);
}

MateriaSource::MateriaSource(MateriaSource const & in) {
	*this = in;
}

MateriaSource &MateriaSource::operator=(MateriaSource const & in) {
	for (int i = 0; i < _sourceSize; i++)
	{
		if (_source[i] != NULL)
			delete _source[i];
		if (in._source[i] != NULL)
			_source[i] = in._source[i]->clone();
		else
			_source[i] = NULL;
	}
	return (*this);
}

MateriaSource::~MateriaSource() {
	for (int i = 0; i < _sourceSize; i++)
	{
		if (_source[i] != NULL)
			delete _source[i];
	}
}