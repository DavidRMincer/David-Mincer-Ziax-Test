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
	string GetName();
	void SetName(string newName);
	int GetValue();
	void SetValue(int newValue);
	void AddValue(int addition);
	~ValueController();
};

