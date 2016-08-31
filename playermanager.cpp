#include "playermanager.h"

PlayerManager::PlayerManager()
{

}


PlayerManager& getInstance()
{
    static PlayerManager ins;
    return ins;
}
