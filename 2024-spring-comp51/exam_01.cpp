#include <iostream>
#include <string>
using namespace std;

// Calculates total cost or revenue (price * quantity).
// (Pass parameters by value.)
double calculateCost(double price, int quantity){
    
}

// Updates the player's money by adding the given amount.
// (Pass money by reference so that changes persist.)
void updateMoney(double &money, double amount){
    
}

// Prompts the user to enter an integer between 'min' and 'max'.
// Uses a while loop for input validation.
int getValidChoice(const string &prompt, int min, int max){
    int choice;
    cin >> choice;
    return choice;
}

// Displays the player's current money and fruit inventory.
// Uses basic output statements; each fruit is handled by its own variable.
void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount){
    
}

// Handles the buying process at Location A.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Calculate the cost and check if the player has enough money.
//   - Update money and the appropriate fruit count if the purchase is successful.
void locationABuy(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                  double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice){
                      
                  }

// Handles the selling process at Location B.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu with selling prices.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Check if the player has enough inventory of the chosen fruit.
//   - Calculate the revenue, update inventory, and update money accordingly.
void locationBSell(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                   double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice){
                       
                   }

// ========================================
// Main Function
// ========================================
int main() {
    // Initialize player's money and winning goal.
    double money = 500.0;
    const double goal = 1000.0;
    
    // Initialize fruit prices (buy prices).
    double applePrice = 50.0;
    double bananaPrice = 30.0;
    double blueberryPrice = 40.0;
    double orangePrice = 20.0;
    double cherryPrice = 60.0;
    
    // Initialize fruit inventory counts (all start at 0).
    int appleCount = 0;
    int bananaCount = 0;
    int blueberryCount = 0;
    int orangeCount = 0;
    int cherryCount = 0;
    
    bool gameOver = false; // Flag to control the main game loop.
    int choice;          // Player's menu choice.
    
    // Main game loop: continues until the game is over or the player exits.
    while (!gameOver) {
        // Display the current game status.
        displayStatus(money, appleCount, bananaCount, blueberryCount, orangeCount, cherryCount);
        
        // Display main menu options.
        cout << "Choose your location:" << endl;
        cout << "1. Location A (Buy Fruit)" << endl;
        cout << "2. Location B (Sell Fruit)" << endl;
        cout << "3. Exit Game" << endl;
        
        // Use input validation to get a valid choice.
        choice = getValidChoice("Enter your choice: ", 1, 3);
        
        // Process the player's choice.
        if (choice == 1) {
            // Call the function to handle buying fruit.
            locationABuy(money, appleCount, bananaCount, blueberryCount, orangeCount, cherryCount,
                         applePrice, bananaPrice, blueberryPrice, orangePrice, cherryPrice);
        } else if (choice == 2) {
            // Call the function to handle selling fruit.
            locationBSell(money, appleCount, bananaCount, blueberryCount, orangeCount, cherryCount,
                          applePrice, bananaPrice, blueberryPrice, orangePrice, cherryPrice);
        } else if (choice == 3) {
            // Exit the game.
            cout << "Exiting game. Thank you for playing!" << endl;
            break;
        }
        
        // Check if the player has reached or exceeded the goal.
        if (money >= goal) {
            cout << "\nCongratulations! You have reached $" << money << " and won the game!" << endl;
            gameOver = true;
        }
    }
    
    return 0;
}
