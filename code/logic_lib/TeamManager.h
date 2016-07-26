

#ifndef _TEAM_MANAGER_H_
#define _TEAM_MANAGER_H_

#include <map>

//��ӹ���
class Team;

class TeamManager
{
public:
	TeamManager();
	~TeamManager();

public:
	//ע�������
	Team*		createNewTeam();

	//������
	Team*		getTeamByUid(int uid);

	//ע�����
	void		deleteTeamByUid(int uid);


public:
	void		addNewTeam(int uid, Team* team);

private:

	int						mCurUid;					//uid ͳ��
	std::map<int, Team*>	mTeamList;
};

#endif	//_PLAYER_MANAGER_H_