#pragma once
#include "Lab08H.h"


class Character{

public:
    Character();

    string name, race, sex;
    vector<string> playerRace; 
    vector<int>test;
    int health, totalHealth, maxHealth, heal;

    int level, current_xp, base_xp, xp_to_level, minLevel, maxLevel; 
    void characterCreation();

};