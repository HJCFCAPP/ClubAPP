#include "Team.h"

Team::Team(int uid)
	: mUid(uid)
{

}

Team::~Team()
{

}


void Team::setTeamName(const std::string& name)
{
	mTeamName = name;
}

std::string& Team::getTeamName()
{
	return mTeamName;
}



