#pragma once
#pragma once
#include <string>
#include <vector>
#include "Player.h"
class Game
{
	std::vector<Player*> players;
public:
	Player* GetPlayer(int);
	bool SavePlayer(Player*);
};
