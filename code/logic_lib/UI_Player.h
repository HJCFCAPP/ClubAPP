
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

	//�����Ա�б�
	static void getPlayerList(std::vector<PlayerInfo>& playerList);

	//��������Ա
	static void createNewPlayer(CreatePlayerInfo& playerInfo);
};

#endif // !_UI_PLAYER_H_
