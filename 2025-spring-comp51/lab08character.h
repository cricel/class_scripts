#pragma once

#include "lab08.h"
class Character
{
public:
    Character();

    string name, race, sex;
    vector<string> playerrace;
    int level, xp, health, totalhealth, maxhealth, nextlevel, heal;

    void charactercreation();
};