#include "Player.h"

Player::Player(int uid)
: mUid(uid)
, mAge(0)
, mNumber(0)
, mPosition(PP_NULL)
{

}

Player::~Player()
{

}


void Player::setName(const std::string& name)
{
	mName = name;
}

std::string& Player::getName()
{
	return mName;
}

void Player::setAge(int age)
{
	mAge = age;
}

int Player::getAge()
{
	return mAge;
}

void Player::setNumber(int number)
{
	mNumber = number;
}

int Player::getNumber()
{
	return mNumber;
}

void Player::setPosition(PLAYER_POSITION pos)
{
	mPosition = pos;
}

PLAYER_POSITION Player::getPosition()
{
	return mPosition;
}
