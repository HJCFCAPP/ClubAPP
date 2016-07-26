#include "Player.h"

Player::Player()
: mUid(0)
, mAge(0)
, mNumber(0)
, mPosition(POSITION_NULL)
{

}

Player::~Player()
{

}

void Player::setUid(int uid)
{
	mUid = uid;
}

int Player::getUid()
{
	return mUid;
}
