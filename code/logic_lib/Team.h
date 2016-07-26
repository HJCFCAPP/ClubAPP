

#ifndef _TEAM_H_
#define _TEAM_H_

#include "macro.h"
#include <string>

//球队信息

class Team
{

public:

	Team(int uid);
	~Team();

	void			setTeamName(const std::string& name);
	std::string&	getTeamName();


private:
	int					mUid;					//世界唯一id
	std::string			mTeamName;				//球队名字

private:
	Team();
	Team(const Team&);
	Team& operator=(const Team&);
};

#endif	//_TEAM_H_