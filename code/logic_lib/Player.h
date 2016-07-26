

#ifndef _PLAYER_H_
#define _PLAYER_H_

#include "macro.h"
#include <string>

//��Ա��Ϣ

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
	int					mUid;					//����Ψһid
	std::string			mName;					//����
	int					mAge;					//����
	int					mNumber;				//��Ա����
	PLAYER_POSITION		mPosition;				//����λ��

private:
	Player();
	Player(const Player&);
	Player& operator=(const Player&);
};

#endif	//_PLAYER_H_