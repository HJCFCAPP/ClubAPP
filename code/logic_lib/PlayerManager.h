

#ifndef _PLAYER_MANAGER_H_
#define _PLAYER_MANAGER_H_

#include <map>

//��Ա����
class Player;

class PlayerManager
{
public:
	PlayerManager();
	~PlayerManager();

public:
	//�ṩ��UIʹ�õĽӿڣ� ��Ҫ�Ľӿ��������
	//ע������Ա
	Player*		createNewPlayer();

	//�����Ա
	Player*		getPlayerByUid(int uid);

	//ע����Ա
	void		deletePlayerByUid(int uid);


public:
	void		addNewPlayer(int uid, Player* player);

private:

	int						mCurUid;					//uid ͳ��
	std::map<int, Player*>	mPlayerList;
};

#endif	//_PLAYER_MANAGER_H_