#include "pch.h"
#include "Character.h"


Character::Character()
{
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
