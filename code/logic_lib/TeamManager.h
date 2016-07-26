

#ifndef _TEAM_MANAGER_H_
#define _TEAM_MANAGER_H_

#include <map>

//球队管理
class Team;

class TeamManager
{
public:
	TeamManager();
	~TeamManager();

public:
	//注册新球队
	Team*		createNewTeam();

	//获得球队
	Team*		getTeamByUid(int uid);

	//注销球队
	void		deleteTeamByUid(int uid);


public:
	void		addNewTeam(int uid, Team* team);

private:

	int						mCurUid;					//uid 统计
	std::map<int, Team*>	mTeamList;
};

#endif	//_PLAYER_MANAGER_H_