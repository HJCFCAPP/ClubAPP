

#ifndef _PLAYER_H_
#define _PLAYER_H_

//球员信息

class Player
{
public:

	//位置
	enum  POSITION
	{
		FORWARD = 0,		//前锋
		LEFT_WING = 1,		//左边锋
		RIGHT_WING = 2,		//右边锋
	};

public:

	Player();
	~Player();

	void setPlayerInfo();

private:
	int				mUid;					//世界唯一id
	std::string		mName;					//名字
	int				mAge;					//年龄
	int				mNumber;				//球员号码
	POSITION		mPosition;				//场上位置
};

#endif	//_PLAYER_H_