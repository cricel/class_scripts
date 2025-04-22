#include <iostream>
#include <vector>
#include <string>
#include <unistd.h>
using namespace std;
#include "lab08.h"



Character::Character(){

    name = " ";
    race = " ";
    sex = " ";

   playerRace = {"elf", "dwarf", "firelord", "goblin", "human"};

    level = 0, health = 0, totalHealth = 0, maxHealth = 0, heal = 0;

    level = 1, current_xp = 0, base_xp = 83, xp_to_level = base_xp, minLevel = 1, maxLevel = 60;
}


int main() {
    // Declare and initialize a vector of integers
    std::vector<int> numbers = {10, 20, 30, 40, 50};

}
