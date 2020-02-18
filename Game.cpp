#pragma once
#include"Game.h"

Player* Game::GetPlayer(int n)
{
	return players[n];
}

bool Game::SavePlayer(Player* obj)
{
	players.push_back(obj);
	return 0;
}
