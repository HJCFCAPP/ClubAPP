

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include <string>

//球员信息

class Player
{
public:

	//位置
	enum  POSITION
	{
		POSITION_NULL = 0,

		FORWARD = 1,		//前锋
		LEFT_WING = 2,		//左边锋
		RIGHT_WING = 3,		//右边锋


		POSITION_MAX = 5
	};

public:

	Player();
	~Player();

	void	setUid(int uid);
	int		getUid();

private:
	int				mUid;					//世界唯一id
	std::string		mName;					//名字
	int				mAge;					//年龄
	int				mNumber;				//球员号码
	POSITION		mPosition;				//场上位置
};

#endif	//_PLAYER_H_