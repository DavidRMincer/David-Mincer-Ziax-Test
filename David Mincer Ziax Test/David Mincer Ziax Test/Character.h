#pragma once
#include "DynamicEntity.h"
#include <string>

using namespace std;

class Character :
	public DynamicEntity
{
private:
	string _displayName;

public:
	Character();
	Character(string name, float speed);
	string GetName();
	void SetName(string newName);
	~Character();
};

