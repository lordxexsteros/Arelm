#include "../entity.h"

class Player {
    public:
        string name;
        int health;
        string wepon;
        string aurmor;
        int coins;
        int level;

};

Player user;

void initPlayer()
{
    user.name = get_name();
    user.health = 100;
    user.wepon = "Sword";
    user.aurmor = "Leather";
    user.coins = 0;
    user.level = 1;
}