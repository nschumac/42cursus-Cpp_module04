#include "Character.hpp"
#include "AMateria.hpp"
#include <unistd.h>
Character::Character() {

}

Character::Character(Character const & in) {
	*this = in;
}

Character::Character(std::string name) : _name(name)
{
	for(int i = 0; i < _inventorySize; i++)
		inventory[i] = NULL;
}

Character &Character::operator=(Character const & in) 
{
	_name = in._name;	
	for (int i = 0; i < _inventorySize; i++)
	{
		if (inventory[i])
			delete inventory[i];
		if (in.inventory[i])
			inventory[i] = in.inventory[i]->clone();
		else
			inventory[i] = NULL;
	}
	return (*this);
}

void	Character::equip(AMateria *m)
{
	if (!m)
		return ;
	for (int i = 0; i < _inventorySize; i++)
	{
		if (inventory[i] == 0)
		{
			
			inventory[i] = m->clone();
			break ;
		}
	}
}

std::string const &Character::getName() const
{
	return (_name);
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < _inventorySize)
	{
		if (inventory[idx])
			delete inventory[idx];
		inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < _inventorySize)
	{
		if (inventory[idx] != 0)
			inventory[idx]->use(target);
	}
}

Character::~Character() {
	for (int i = 0; i < _inventorySize; i++)
	{
		if (inventory[i])
			delete inventory[i];
	}
}