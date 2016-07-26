

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "macro.h"
#include <string>

//球员信息

class Player
{

public:

	Player(int uid);
	~Player();

	void			setName(const std::string& name);
	std::string&	getName();

	void			setAge(int age);
	int				getAge();

	void			setNumber(int number);
	int				getNumber();

	void			setPosition(PLAYER_POSITION pos);
	PLAYER_POSITION	getPosition();

private:
	int					mUid;					//世界唯一id
	std::string			mName;					//名字
	int					mAge;					//年龄
	int					mNumber;				//球员号码
	PLAYER_POSITION		mPosition;				//场上位置

private:
	Player();
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif	//_PLAYER_H_