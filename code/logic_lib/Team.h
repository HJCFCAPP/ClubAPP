

#ifndef _TEAM_H_
#define _TEAM_H_

#include "macro.h"
#include <string>

//�����Ϣ

class Team
{

public:

	Team(int uid);
	~Team();

	void			setTeamName(const std::string& name);
	std::string&	getTeamName();


private:
	int					mUid;					//����Ψһid
	std::string			mTeamName;				//�������

private:
	Team();
	Team(const Team&);
	Team& operator=(const Team&);
};

#endif	//_TEAM_H_