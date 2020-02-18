#pragma once
#include <string>
#include <iostream>
#include "Game.h"
class Action
{
private:
	const std::string type;
public:
	Action(std::string);
	Action();
	virtual std::string getActionType();
	virtual bool execute();
	~Action();
};

