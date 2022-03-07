#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:

	std::string _name;
	static int const	_inventorySize = 4;
	AMateria *inventory[4];
	
	Character();
public:
	Character(Character const &in);
	Character(std::string name);
	std::string const & getName() const; 
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target); 
	Character &operator=(Character const & in);
	~Character();
};

#endif