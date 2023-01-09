#include "pch.h"
#include "Character.h"


Character::Character()
{
}

Character::Character(string name, float speed) : DynamicEntity(speed)
{
	_displayName = name;
}

/*
	Returns character's name
*/
string Character::GetName()
{
	return _displayName;
}

/*
	Changes character's name
*/
void Character::SetName(string newName)
{
	_displayName = newName;
}


Character::~Character()
{
}
