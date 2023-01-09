#pragma once
#include "Character.h"
#include "ValueController.h"
#include <iostream>
#include <vector>

using namespace std;

class PlayableCharacter :
	public Character
{
private:
	ValueController _coins;
	vector<ValueController> _stats;
	vector<PlayableCharacter*> _friendlist;

public:
	PlayableCharacter();
	ValueController GetCoins();
	void AddStatController(string name, int min, int max);
	ValueController GetStat(int index);
	void RemoveStat(int index);
	void AddFriend(PlayableCharacter* newFriend);
	PlayableCharacter GetFriend(int index);
	void RemoveFriend(int index);
	void ReadData();
	~PlayableCharacter();
};

