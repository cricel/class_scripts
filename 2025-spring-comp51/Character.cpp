#include "Character.h"

Character::Character(){

    name = " ";
    race = " ";
    sex = " ";

   playerRace = {"elf", "dwarf", "firelord", "goblin", "human"};

    level = 0, health = 0, totalHealth = 0, maxHealth = 0, heal = 0;

    level = 1, current_xp = 0, base_xp = 83, xp_to_level = base_xp, minLevel = 1, maxLevel = 60;
}

void Character::characterCreation() {
    
    int counter = 0;

    // basic character creation
    cout << "Enter Characters Name: ";
    cin >> name;

    cout << "Enter Characters race:\n";
    cout << "Elf\n";
    cout << "Dwarf\n";
    cout << "FireLord\n";
    cout << "Goblin\n";
    cout << "Human\n";
    cout << "Type below your race: \n";
    cin >> race;

    for (int i = 0; i < race.length(); i++) {
    race[i] = tolower(race[i]);
}

    for(int i = 0; i < sizeof(playerRace); i++) {
        if(race == "elf") {
            health = 80;
            break;
        } else if(race == "dwarf") {
            health = 120;
            break;
        } else if(race == "firelord") {
            health = 150;
            break;
        } else if(race == "goblin") {
            health = 82;
            break;
        } else if(race == "human") {
            health = 68;
            break;
        }
        else {
            health = 100;
            break;
        } 
    }

    cout << "\n";
    cout << "Enter Characters sex: ";
    cin >> sex;
    system("clear");

    // Fun little creation
    for(int i = 0; i <= counter; i++) {
        if(i == 0)
            cout << "Creating Character.\n";
        if(i == 1)
            cout << "Creating Character..\n";
        if (i == 2){
            cout << "Creating Character...\n";
            break;
        }

        sleep(1);
        system("clear");
        counter++;
    }

    name[0] = toupper(name[0]);
    race[0] = toupper(race[0]);
    sex[0] = toupper(sex[0]);

    totalHealth = health;
    maxHealth = totalHealth;
}