#include "Character.h"
// #include "Character.cpp"

void HUD();
void Combat();
void CombatHUD();
void Moving();
void CreateMonster();
void LevelUp();


int monsterHp = 0;
int monsterXp = 0;
int monsterLevel = 0;

string monsterName[] = {"Goblin", "Dwarf", "Ogre", "Witch", "Demon", "Wizard" };
int currentMonsterNames = 5;
string currentMonster = " ";

int counter = 0;

Character character;

int main() {

    character.characterCreation();
    
    HUD();
    Moving();

    cin.ignore();

    return 0;

}

void HUD() { 
    sleep(1);
    system("clear");
    cout << "Name: " << character.name << "       Health: " << character.totalHealth << "\nRace: " << character.race
        << "\nSex: " << character.sex << "\nLevel: " << character.level << "\nXp: " << character.current_xp << "\nXp to Level: " << character.xp_to_level << endl;
    Moving();
}

void CombatHUD() {
    sleep(1);
    system("clear");
    cout << "Name: " << character.name << "       |       Monster Name: " << currentMonster << "\nHealth: " << character.totalHealth << "       |       Monster Health: " <<
        monsterHp << "\nLevel: " << character.level << "          |       Monster Level: " << monsterLevel << endl;
}

void Combat() {
    CombatHUD();
    int playerAttack;
    int playerDamage = 8 * character.level / 2;
    int monsterAttack = 6 * monsterLevel /2;

    if(character.totalHealth >= 1 && monsterHp >= 1) {
        cout << "\n";
        cout << "1. Attack\n";
        cout << "2. Block\n";
        cout << "3. RUN!\n";
        cout << "\n";
        cin >> playerAttack;

        if(playerAttack == 1) {
            //Attack
            cout << "Attacking... you did " << playerDamage << " to the " << currentMonster << endl;
            monsterHp = monsterHp - playerDamage;
            sleep(1);
            CombatHUD();
            if (monsterHp >= 1) {
                cout << "\n";
                cout << "Monster is Attacking..\n";
                character.totalHealth = character.totalHealth - monsterAttack;
                cout << "You suffered " << monsterAttack << " hp " << character.totalHealth << endl;
                // Change to function.
                if (character.totalHealth <= 0) {
                    character.totalHealth = 0;
                    system("clear");
                    cout << "You Died! \nYou were level: " << character.level << " you got killed by " << currentMonster << endl;
                    sleep(2);
                    exit(0);
                }
            } else if(monsterHp <= 0) {
                monsterHp = 0;
                cout << "\n";
                cout << "You Defeated " << currentMonster << " you are rewarded with " << monsterXp << " xp.\nWell Done!\n";

                if(character.level != character.maxLevel) {
                    character.current_xp += monsterXp;
                    LevelUp();
                }
                sleep(1); 
                HUD(); 
            }
            sleep(1);
            Combat();
        }
        else if (playerAttack == 2) {
            //Block
            cout << "Blocking\n";
            int i = rand() % 100 + 1;
            if (i >= 50) {
                cout << "You Blocked the incoming attack\n";
                character.heal = character.level * 10 / 2;
                cout << "You have been Healed for " << character.heal << endl;
                character.totalHealth += character.heal;
                sleep(1);
                Combat();
            }
            else {
                cout << "You failed to block the savage attack\n";
                character.totalHealth -= monsterAttack;
                cout << "You were stabbed in the back for " << monsterAttack << " current hp " << character.totalHealth << endl;
                sleep(1);
                Combat();
            }
        }
        else if (playerAttack == 3) {
            //Run
            cout << "You try to run\n";
            int x = rand() % 100 + 1;
            if (x >= 50) {
                cout << "You run away\n";
                HUD();
            }
            else {
                cout << "you failed to run away\n";
                cout << "Monster does a savage attack on you!\n";
                character.totalHealth -= monsterAttack + 10;
                cout << "You suffered " << monsterAttack + 10 << "Your current Health is " << character.totalHealth << endl;
                sleep(1);
                Combat();
            }
        }
        else {
            cout << "Invalid Number\n";
            sleep(2);
            Combat();
        }
    }
}

void Moving() { 

    int choice;
    
    cout << "\n\n";
    cout << "1. Move Forward\n";
    cout << "2. Relax\n";
    cout << "3. Move Backwards\n";
    cout << "\n";

    cin >> choice;

    if(choice == 1) {
        int temp = rand() % 100 + 1;
        cout << "You begin moving forward...\n";
        if(temp >= 50) {
            // Encounter a monster
            CreateMonster();
            string tempName = monsterName[rand() % currentMonsterNames];
            cout << "A " << tempName << "| Prepare to fight!\n";
            currentMonster = tempName;
            sleep(1);
            Combat();
        }
        cout << "You find nothing of interest\n";
        sleep(1);
        HUD();
    } 
    else if (choice == 2) {
        cout << "You want to set up camp for the evening\n";
        if(character.totalHealth <= 99) {
            character.totalHealth += 10 * character.level;
        }
        cout << "You healed by resting. Health is now " << character.totalHealth << endl;
        sleep(1);
        HUD();
    }
    else if (choice == 3) {
        int temp = rand() % 100 + 1;
        cout << "You begin moving backwards...\n";
        if(temp >= 50) {
            // Encounter a monster
            CreateMonster();
            string tempName = monsterName[rand() % currentMonsterNames];
            cout << "A " << tempName << "| Prepare to fight!\n";
            currentMonster = tempName;
            sleep(1);
            Combat();
        }
        cout << "You find nothing of interest\n";
        sleep(1);
        HUD();
    }
    else {
        cout << "Invalid Number\n";
        sleep(2);
        Moving();
    }
}

void LevelUp() {

    if(character.current_xp >= character.xp_to_level){
        character.xp_to_level += floor(character.level + 25 * pow(2, character.level/7));
        character.totalHealth = floor(character.totalHealth + 13 * pow(2, character.level / 8));

        if(character.level >= character.minLevel && character.level <= character.maxLevel) {
            character.level++;
        } 
        else {
            character.level = 60;
        }

        character.maxHealth = character.totalHealth;
        cout << "Wait whats this a level up! you are now level " << character.level << endl;
        cout << "Your total health increased, now your health is " << character.totalHealth << endl;
        cout << "\n";
        sleep(1);
        LevelUp();
    }

    sleep(2);
    HUD();    
}

void CreateMonster() { 
    monsterHp = 30;

    monsterLevel = (rand() % 3) + character.level;
    monsterHp = (rand() % 30) * monsterLevel;

    monsterXp = monsterHp;

    if (monsterHp == 0)
        CreateMonster();
    if (monsterLevel == 0)
        CreateMonster();
}
