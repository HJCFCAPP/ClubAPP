
#include "PlayerManager.h"
#include "Player.h"


PlayerManager::PlayerManager()
:mCurUid(0)
{

}

PlayerManager::~PlayerManager()
{

}

Player* PlayerManager::createNewPlayer()
{
	mCurUid++;
	Player* existPlayer = this->getPlayerByUid(mCurUid);
	if (NULL != existPlayer)
	{
		return existPlayer;
	}

	Player* newPlayer = new Player(mCurUid);
	this->addNewPlayer(mCurUid, newPlayer);

	return newPlayer;
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


void PlayerManager::addNewPlayer(int uid, Player* player)
{
	mPlayerList[uid] = player;
}