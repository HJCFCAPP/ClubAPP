#ifndef PLAYERMANAGER_H
#define PLAYERMANAGER_H

#include <vector>

class player;

class PlayerManager
{
public:
    PlayerManager();


    static PlayerManager& getInstance();


private:
    std::vector<player*> mPlayerList;
};

#endif // PLAYERMANAGER_H
