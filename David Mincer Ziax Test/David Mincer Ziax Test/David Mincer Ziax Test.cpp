// David Mincer Ziax Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "PlayableCharacter.h"
#include <iostream>

using namespace std;

int main()
{
	PlayableCharacter Player1("Ben", 9, 999);
	Player1.AddStatController("Health", 0, 100);
	Player1.AddStatController("Mana", 0, 30);
	Player1.SetCoins(404);
	Player1.SetStat(0, 100);
	Player1.AddtoStat(1, 50);

	PlayableCharacter Player2("Kat", 10, 999);
	Player2.AddStatController("Health", 0, 100);
	Player2.AddStatController("Mana", 0, 30);
	Player2.SetStat(0, 75);
	Player2.SetStat(1, 3);

	PlayableCharacter Player3("Kelly", 10, 999);
	Player3.AddStatController("Health", 0, 100);
	Player3.AddStatController("Mana", 0, 30);


	Player1.AddFriend(&Player3);
	Player3.AddFriend(&Player1);

	Player1.ReadData();
	cout << endl << "---------------------------------------------------------" << endl;
	Player2.ReadData();
	cout << endl << "---------------------------------------------------------" << endl;
	Player3.ReadData();

	return 0;
}
