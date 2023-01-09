#include "pch.h"
#include "ValueController.h"


/*
	Updates current value to stay within min and max range
*/
void ValueController::KeepValueWithinRange()
{
	if (_currentValue > _maxValue)
		_currentValue = _maxValue;
	else if (_currentValue < _minValue)
		_currentValue = _minValue;
}

ValueController::ValueController()
{
}

/*
	Custom constructor
*/
ValueController::ValueController(string name, int min, int max)
{
	_name = name;
	_minValue = min;
	_maxValue = max;

	_currentValue = min;
}

/*
	Returns name of value
*/
string ValueController::GetName()
{
	return _name;
}

/*
	Changes the controller's name
*/
void ValueController::SetName(string newName)
{
	_name = newName;
}

/*
	Returns current value
*/
int ValueController::GetValue()
{
	return _currentValue;
}

/*
	Sets current value to new value
*/
void ValueController::SetValue(int newValue)
{
	_currentValue = newValue;
	// Updates current value to stay within min and max range
	KeepValueWithinRange();
}

/*
	Adds new value to current value
*/
void ValueController::AddValue(int addition)
{
	_currentValue += addition;
	// Updates current value to stay within min and max range
	KeepValueWithinRange();
}


ValueController::~ValueController()
{
}
