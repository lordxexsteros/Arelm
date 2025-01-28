#ifndef ITEMS_H
#define ITEMS_H
#include "../linker.h"

struct Weapon
{
    string name;
    int damage;
    int cost;
};

struct Armor
{
    string name;
    int defense;
    int cost;
};

struct Potion
{
    string name;
    int health;
    int cost;
};
#endif