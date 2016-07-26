

#ifndef _PLAYER_H_
#define _PLAYER_H_

//��Ա��Ϣ

class Player
{
public:

	//λ��
	enum  POSITION
	{
		FORWARD = 0,		//ǰ��
		LEFT_WING = 1,		//��߷�
		RIGHT_WING = 2,		//�ұ߷�
	};

public:

	Player();
	~Player();

	void setPlayerInfo();

private:
	int				mUid;					//����Ψһid
	std::string		mName;					//����
	int				mAge;					//����
	int				mNumber;				//��Ա����
	POSITION		mPosition;				//����λ��
};

#endif	//_PLAYER_H_