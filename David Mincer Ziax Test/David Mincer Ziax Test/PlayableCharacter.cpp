#include "pch.h"
#include "PlayableCharacter.h"

PlayableCharacter::PlayableCharacter()
{
}

/*
	Returns coin value
*/
ValueController PlayableCharacter::GetCoins()
{
	return _coins;
}

/*
	Adds new stat to the vector of stats
*/
void PlayableCharacter::AddStatController(string name, int min, int max)
{
	ValueController newStat(name, min, max);

	_stats.push_back(newStat);
}

/*
	Returns a stat
*/
ValueController PlayableCharacter::GetStat(int index)
{
	return _stats[index];
}

/*
	Deletes stat
*/
void PlayableCharacter::RemoveStat(int index)
{
	if (index < _stats.size())
	{
		delete &_stats[index];
		_stats.resize(_stats.size() - 1);
	}
}

/*
	Adds playable character to friend list
*/
void PlayableCharacter::AddFriend(PlayableCharacter * newFriend)
{
	_friendlist.push_back(newFriend);
}

/*
	Returns a playable character from the friendlist
*/
PlayableCharacter PlayableCharacter::GetFriend(int index)
{
	return *_friendlist[index];
}

/*
	Removes playable character from the friendlist
*/
void PlayableCharacter::RemoveFriend(int index)
{
	if (index < _friendlist.size())
	{
		_friendlist[index] = nullptr;
		_friendlist.resize(_friendlist.size() - 1);
	}
}

/*
	Displays all the playable character's data
*/
void PlayableCharacter::ReadData()
{
	cout << "Name: " << GetName();
	cout << "Coins: " << GetCoins().GetValue() << endl;
	// Display stats
	for (int i = 0; i < _stats.size(); i++)
	{
		cout << _stats[i].GetName() << ": " << _stats[i].GetValue() << endl;
	}
	
	// Display friendlist
	cout << "Friends: " << endl;
	for (int i = 0; i < _friendlist.size(); i++)
	{
		cout << (i + 1) << ": " << _friendlist[i]->GetName() << endl;
	}
}


PlayableCharacter::~PlayableCharacter()
{
}
