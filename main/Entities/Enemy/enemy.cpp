#include "../entity.h"
#include <map>

class Enemy
{
private:
    std::map<std::string, int> attacks;

public:
    string name;
    int health;

    void addAttack(const std::string &attackName, int damage)
    {
        if (attacks.size() < 3)
        { // Ensure only 3 attacks can be added
            attacks[attackName] = damage;
        }
        else
        {
            std::cout << "Attack slots are full!" << std::endl;
        }
    }
    int coins_drops;
    int level;
    int exp_drops;
};

Enemy goblin;
Enemy skeleton;
Enemy zombie;
Enemy ghost;
Enemy demon;

Enemy dragon;
Enemy playevil;
Enemy Shadows;
Enemy shadow_dragon;

Enemy Shadow_knight;

void initEnemies()
{
    goblin.name = "Goblin";
    goblin.health = 100;
    goblin.coins_drops = 10;
    goblin.level = 1;
    goblin.exp_drops = 10;
    goblin.addAttack("Punch", 10);
    goblin.addAttack("Kick", 15);
    goblin.addAttack("Headbutt", 20);

    skeleton.name = "Skeleton";
    skeleton.health = 150;
    skeleton.coins_drops = 20;
    skeleton.level = 2;
    skeleton.exp_drops = 20;
    skeleton.addAttack("Slash", 20);
    skeleton.addAttack("Stab", 25);
    skeleton.addAttack("Throw Bone", 30);

    zombie.name = "Zombie";
    zombie.health = 200;
    zombie.coins_drops = 30;
    zombie.level = 3;
    zombie.exp_drops = 30;
    zombie.addAttack("Bite", 30);
    zombie.addAttack("Scratch", 35);
    zombie.addAttack("Punch", 40);

    ghost.name = "Ghost";
    ghost.health = 250;
    ghost.coins_drops = 40;
    ghost.level = 4;
    ghost.exp_drops = 40;
    ghost.addAttack("Possess", 40);
    ghost.addAttack("Haunt", 45);
    ghost.addAttack("Curse", 50);

    dragon.name = "Dragon";
    dragon.health = 300;
    dragon.coins_drops = 50;
    dragon.level = 5;
    dragon.exp_drops = 50;
    dragon.addAttack("Fire Breath", 50);
    dragon.addAttack("Claw", 55);
    dragon.addAttack("Tail Whip", 60);

    demon.name = "Demon";
    demon.health = 350;
    demon.coins_drops = 60;
    demon.level = 6;
    demon.exp_drops = 60;
    demon.addAttack("Hellfire", 60);
    demon.addAttack("Darkness", 65);
    demon.addAttack("Curse", 70);

    Shadows.name = "Shadows";
    Shadows.health = 1000;
    Shadows.coins_drops = 70;
    Shadows.level = 7;
    Shadows.exp_drops = 70;
    Shadows.addAttack("Shadow Ball", 70);
    Shadows.addAttack("Shadow Claw", 75);
    Shadows.addAttack("Shadow Punch", 80);

    shadow_dragon.name = "Shadow Dragon";
    shadow_dragon.health = 1500;
    shadow_dragon.coins_drops = 80;
    shadow_dragon.level = 8;
    shadow_dragon.exp_drops = 80;
    shadow_dragon.addAttack("Shadow Fire Breath", 80);
    shadow_dragon.addAttack("Shadow Claw", 85);
    shadow_dragon.addAttack("Shadow Tail Whip", 90);

    Shadow_knight.name = "Shadow Knight";
    Shadow_knight.health = 2000;
    Shadow_knight.coins_drops = 90;
    Shadow_knight.level = 9;
    Shadow_knight.exp_drops = 90;
    Shadow_knight.addAttack("Shadow Slash", 90);
    Shadow_knight.addAttack("Shadow Stab", 95);
    Shadow_knight.addAttack("Shadow Throw Bone", 100);  

    playevil.name = "Playevil";
    playevil.health = 2500;
    playevil.coins_drops = 100;
    playevil.level = 10;
    playevil.exp_drops = 100;
    playevil.addAttack("Playevil Bite", 100);
    playevil.addAttack("Playevil Scratch", 105);
    playevil.addAttack("Playevil Punch", 110);
    
}

