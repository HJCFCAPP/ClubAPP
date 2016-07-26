

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

//��Ա��Ϣ

class Player
{
public:

	//λ��
	enum  POSITION
	{
		POSITION_NULL = 0,

		FORWARD = 1,		//ǰ��
		LEFT_WING = 2,		//��߷�
		RIGHT_WING = 3,		//�ұ߷�


		POSITION_MAX = 5
	};

public:

	Player();
	~Player();

	void	setUid(int uid);
	int		getUid();

private:
	int				mUid;					//����Ψһid
	std::string		mName;					//����
	int				mAge;					//����
	int				mNumber;				//��Ա����
	POSITION		mPosition;				//����λ��
};

#endif	//_PLAYER_H_