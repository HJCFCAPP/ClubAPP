

#ifndef _PLAYER_MANAGER_H_
#define _PLAYER_MANAGER_H_

#include <map>

//球员管理
class Player;

class PlayerManager
{
public:
	PlayerManager();
	~PlayerManager();

public:
	//提供给UI使用的接口， 需要的接口请往后加
	//注册新球员
	Player*		createNewPlayer();

	//获得球员
	Player*		getPlayerByUid(int uid);

	//注销球员
	void		deletePlayerByUid(int uid);


public:
	void		addNewPlayer(int uid, Player* player);

private:

	int						mCurUid;					//uid 统计
	std::map<int, Player*>	mPlayerList;
};

#endif	//_PLAYER_MANAGER_H_