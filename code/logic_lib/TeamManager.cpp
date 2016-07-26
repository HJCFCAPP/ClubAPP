
#include "TeamManager.h"
#include "Team.h"


TeamManager::TeamManager()
	:mCurUid(0)
{

}

TeamManager::~TeamManager()
{

}

Team* TeamManager::createNewTeam()
{
	mCurUid++;
	Team* existTeam = this->getTeamByUid(mCurUid);
	if (NULL != existTeam)
	{
		return existTeam;
	}

	Team* newTeam = new Team(mCurUid);
	this->addNewTeam(mCurUid, newTeam);

	return newTeam;
}

Team* TeamManager::getTeamByUid(int uid)
{
	std::map<int, Team*>::iterator iter = mTeamList.find(uid);
	if (iter != mTeamList.end())
	{
		return iter->second;
	}

	return NULL;
}

void TeamManager::deleteTeamByUid(int uid)
{
	mTeamList.erase(uid);
}


void TeamManager::addNewTeam(int uid, Team* team)
{
	mTeamList[uid] = team;
}