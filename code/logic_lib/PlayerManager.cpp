
#include "PlayerManager.h"
#include "Player.h"


PlayerManager::PlayerManager()
{

}

PlayerManager::~PlayerManager()
{

}

Player* PlayerManager::createNewPlayer()
{
	return new Player();
}

Player* PlayerManager::getPlayerByUid(int uid)
{
	std::map<int, Player*>::iterator iter = mPlayerList.find(uid);
	if (iter != mPlayerList.end())
	{
		return iter->second;
	}

	return NULL;
}

void PlayerManager::deletePlayerByUid(int uid)
{
	mPlayerList.erase(uid);
}

