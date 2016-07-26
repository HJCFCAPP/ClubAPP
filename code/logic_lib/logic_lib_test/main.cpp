#include "../PlayerManager.h"
#include "../Player.h"

void main()
{
	PlayerManager* playerManager = new PlayerManager();
	Player* newPlayer = playerManager->createNewPlayer();
	newPlayer->setName("yyy");
	newPlayer->setAge(29);
	newPlayer->setNumber(10);
	newPlayer->setPosition(PP_FORWARD);

	int kk = 0;
}