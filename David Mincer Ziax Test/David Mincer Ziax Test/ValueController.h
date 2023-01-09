#pragma once
#include <string>

using namespace std;

class ValueController
{
private:
	string _name;
	int _currentValue,
		_minValue,
		_maxValue;

	void KeepValueWithinRange();

public:
	ValueController();
	ValueController(string name, int min, int max);
	string GetName();
	void SetName(string newName);
	int GetValue();
	void SetValue(int newValue);
	void AddValue(int addition);
	~ValueController();
};

