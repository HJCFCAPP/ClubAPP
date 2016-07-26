
#ifndef _UI_PLAYER_H_
#define _UI_PLAYER_H_

#include <vector>

class UI_Player
{
	struct PlayerInfo
	{
		int				age;
		std::string		name;
		int				number;
		//...
	};

	struct CreatePlayerInfo
	{
		int				age;
		std::string		name;
		int				number;
		//...
	};

public:

	//获得球员列表
	static void getPlayerList(std::vector<PlayerInfo>& playerList);

	//创建新球员
	static void createNewPlayer(CreatePlayerInfo& playerInfo);
};

#endif // !_UI_PLAYER_H_
