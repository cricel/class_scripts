#include <iostream>
#include <string>
using namespace std;

// ========================================
// Function Prototypes
// ========================================

// Calculates total cost or revenue (price * quantity).
// (Pass parameters by value.)
double calculateCost(double price, int quantity);

// Updates the player's money by adding the given amount.
// (Pass money by reference so that changes persist.)
void updateMoney(double &money, double amount);

// Prompts the user to enter an integer between 'min' and 'max'.
// Uses a while loop for input validation.
int getValidChoice(const string &prompt, int min, int max);

// Displays the player's current money and fruit inventory.
// Uses basic output statements; each fruit is handled by its own variable.
void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount);

// Handles the buying process at Location A.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Calculate the cost and check if the player has enough money.
//   - Update money and the appropriate fruit count if the purchase is successful.
void locationABuy(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                  double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice);

// Handles the selling process at Location B.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu with selling prices.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Check if the player has enough inventory of the chosen fruit.
//   - Calculate the revenue, update inventory, and update money accordingly.
void locationBSell(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                   double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice);

// ========================================
// Main Function
// ========================================
int main() {
    // Initialize player's money and winning goal.
    double money = 500.0;
    const double goal = 5000.0;
    
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

// ========================================
// Function Definitions
// ========================================

// calculateCost: Returns the product of price and quantity.
double calculateCost(double price, int quantity) {
    // Students: Implement the cost calculation.
    return price * quantity; // Example implementation.
}

// updateMoney: Adjusts the player's money by adding the given amount.
void updateMoney(double &money, double amount) {
    // Students: Implement money updating.
    money += amount; // Example implementation.
}

// getValidChoice: Validates that the user enters an integer within the given range.
int getValidChoice(const string &prompt, int min, int max) {
    int choice;
    cout << prompt;
    cin >> choice;
    // While loop for validation.
    while (choice < min || choice > max) {
        cout << "Invalid input. Please enter a number between " << min << " and " << max << ": ";
        cin >> choice;
    }
    return choice;
}

// displayStatus: Outputs the player's money and individual fruit counts.
void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount) {
    cout << "=================================" << endl;
    cout << "Current Money: $" << money << endl;
    cout << "Fruit Inventory:" << endl;
    cout << "Apple: " << appleCount << endl;
    cout << "Banana: " << bananaCount << endl;
    cout << "Blueberry: " << blueberryCount << endl;
    cout << "Orange: " << orangeCount << endl;
    cout << "Cherry: " << cherryCount << endl;
    cout << "=================================" << endl;
}

// locationABuy: Processes the purchase of fruit at Location A.
void locationABuy(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                  double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice) {
    cout << "\nWelcome to Location A (Buy Fruit)!" << endl;
    
    // Display fruit menu using a for loop (1 to 5) with if/else to show each fruit.
    for (int i = 1; i <= 5; i++) {
        if (i == 1)
            cout << "1. Apple ($" << applePrice << ")" << endl;
        else if (i == 2)
            cout << "2. Banana ($" << bananaPrice << ")" << endl;
        else if (i == 3)
            cout << "3. Blueberry ($" << blueberryPrice << ")" << endl;
        else if (i == 4)
            cout << "4. Orange ($" << orangePrice << ")" << endl;
        else if (i == 5)
            cout << "5. Cherry ($" << cherryPrice << ")" << endl;
    }
    
    // Get the fruit choice from the user.
    int fruitChoice = getValidChoice("Enter the number of the fruit you want to buy: ", 1, 5);
    
    // Prompt for quantity and validate using a while loop.
    cout << "Enter quantity to buy: ";
    int quantity;
    cin >> quantity;
    while (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number: ";
        cin >> quantity;
    }
    
    double cost = 0.0;
    // Determine cost based on fruit chosen.
    switch (fruitChoice) {
        case 1:
            cost = calculateCost(applePrice, quantity);
            break;
        case 2:
            cost = calculateCost(bananaPrice, quantity);
            break;
        case 3:
            cost = calculateCost(blueberryPrice, quantity);
            break;
        case 4:
            cost = calculateCost(orangePrice, quantity);
            break;
        case 5:
            cost = calculateCost(cherryPrice, quantity);
            break;
        default:
            cout << "Invalid fruit choice!" << endl;
            return;
    }
    
    // Check if enough money is available.
    if (money >= cost) {
        // Deduct cost and update the correct fruit count.
        updateMoney(money, -cost);
        switch (fruitChoice) {
            case 1: appleCount += quantity; break;
            case 2: bananaCount += quantity; break;
            case 3: blueberryCount += quantity; break;
            case 4: orangeCount += quantity; break;
            case 5: cherryCount += quantity; break;
        }
        cout << "Purchase successful! You spent $" << cost << endl;
    } else {
        cout << "Not enough money to complete the purchase!" << endl;
    }
}

// locationBSell: Processes the selling of fruit at Location B.
void locationBSell(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                   double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice) {
    cout << "\nWelcome to Location B (Sell Fruit)!" << endl;
    
    // Display fruit menu with selling prices (each price = buy price + $10).
    for (int i = 1; i <= 5; i++) {
        if (i == 1)
            cout << "1. Apple ($" << applePrice + 10 << ")" << endl;
        else if (i == 2)
            cout << "2. Banana ($" << bananaPrice + 10 << ")" << endl;
        else if (i == 3)
            cout << "3. Blueberry ($" << blueberryPrice + 10 << ")" << endl;
        else if (i == 4)
            cout << "4. Orange ($" << orangePrice + 10 << ")" << endl;
        else if (i == 5)
            cout << "5. Cherry ($" << cherryPrice + 10 << ")" << endl;
    }
    
    // Get the fruit choice from the user.
    int fruitChoice = getValidChoice("Enter the number of the fruit you want to sell: ", 1, 5);
    
    // Prompt for quantity to sell and validate it.
    cout << "Enter quantity to sell: ";
    int quantity;
    cin >> quantity;
    while (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number: ";
        cin >> quantity;
    }
    
    double revenue = 0.0;
    // Check if there is enough inventory for the chosen fruit; if so, calculate revenue.
    switch (fruitChoice) {
        case 1:
            if (appleCount < quantity) {
                cout << "Not enough apples to sell!" << endl;
                return;
            }
            revenue = calculateCost(applePrice + 10, quantity);
            appleCount -= quantity;
            break;
        case 2:
            if (bananaCount < quantity) {
                cout << "Not enough bananas to sell!" << endl;
                return;
            }
            revenue = calculateCost(bananaPrice + 10, quantity);
            bananaCount -= quantity;
            break;
        case 3:
            if (blueberryCount < quantity) {
                cout << "Not enough blueberries to sell!" << endl;
                return;
            }
            revenue = calculateCost(blueberryPrice + 10, quantity);
            blueberryCount -= quantity;
            break;
        case 4:
            if (orangeCount < quantity) {
                cout << "Not enough oranges to sell!" << endl;
                return;
            }
            revenue = calculateCost(orangePrice + 10, quantity);
            orangeCount -= quantity;
            break;
        case 5:
            if (cherryCount < quantity) {
                cout << "Not enough cherries to sell!" << endl;
                return;
            }
            revenue = calculateCost(cherryPrice + 10, quantity);
            cherryCount -= quantity;
            break;
        default:
            cout << "Invalid fruit choice!" << endl;
            return;
    }
    
    // Update player's money with the revenue from selling.
    updateMoney(money, revenue);
    cout << "Sale successful! You earned $" << revenue << endl;
}
#include <iostream>
#include <string>
using namespace std;

// ========================================
// Function Prototypes
// ========================================

// Calculates total cost or revenue (price * quantity).
// (Pass parameters by value.)
double calculateCost(double price, int quantity);

// Updates the player's money by adding the given amount.
// (Pass money by reference so that changes persist.)
void updateMoney(double &money, double amount);

// Prompts the user to enter an integer between 'min' and 'max'.
// Uses a while loop for input validation.
int getValidChoice(const string &prompt, int min, int max);

// Displays the player's current money and fruit inventory.
// Uses basic output statements; each fruit is handled by its own variable.
void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount);

// Handles the buying process at Location A.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Calculate the cost and check if the player has enough money.
//   - Update money and the appropriate fruit count if the purchase is successful.
void locationABuy(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                  double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice);

// Handles the selling process at Location B.
// Hints:
//   - Use a for loop (from 1 to 5) with if/else statements to display the fruit menu with selling prices.
//   - Get the user's fruit choice and quantity (validate quantity using a while loop).
//   - Check if the player has enough inventory of the chosen fruit.
//   - Calculate the revenue, update inventory, and update money accordingly.
void locationBSell(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                   double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice);

// ========================================
// Main Function
// ========================================
int main() {
    // Initialize player's money and winning goal.
    double money = 500.0;
    const double goal = 5000.0;
    
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

// ========================================
// Function Definitions
// ========================================

// calculateCost: Returns the product of price and quantity.
double calculateCost(double price, int quantity) {
    // Students: Implement the cost calculation.
    return price * quantity; // Example implementation.
}

// updateMoney: Adjusts the player's money by adding the given amount.
void updateMoney(double &money, double amount) {
    // Students: Implement money updating.
    money += amount; // Example implementation.
}

// getValidChoice: Validates that the user enters an integer within the given range.
int getValidChoice(const string &prompt, int min, int max) {
    int choice;
    cout << prompt;
    cin >> choice;
    // While loop for validation.
    while (choice < min || choice > max) {
        cout << "Invalid input. Please enter a number between " << min << " and " << max << ": ";
        cin >> choice;
    }
    return choice;
}

// displayStatus: Outputs the player's money and individual fruit counts.
void displayStatus(double money, int appleCount, int bananaCount, int blueberryCount, int orangeCount, int cherryCount) {
    cout << "=================================" << endl;
    cout << "Current Money: $" << money << endl;
    cout << "Fruit Inventory:" << endl;
    cout << "Apple: " << appleCount << endl;
    cout << "Banana: " << bananaCount << endl;
    cout << "Blueberry: " << blueberryCount << endl;
    cout << "Orange: " << orangeCount << endl;
    cout << "Cherry: " << cherryCount << endl;
    cout << "=================================" << endl;
}

// locationABuy: Processes the purchase of fruit at Location A.
void locationABuy(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                  double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice) {
    cout << "\nWelcome to Location A (Buy Fruit)!" << endl;
    
    // Display fruit menu using a for loop (1 to 5) with if/else to show each fruit.
    for (int i = 1; i <= 5; i++) {
        if (i == 1)
            cout << "1. Apple ($" << applePrice << ")" << endl;
        else if (i == 2)
            cout << "2. Banana ($" << bananaPrice << ")" << endl;
        else if (i == 3)
            cout << "3. Blueberry ($" << blueberryPrice << ")" << endl;
        else if (i == 4)
            cout << "4. Orange ($" << orangePrice << ")" << endl;
        else if (i == 5)
            cout << "5. Cherry ($" << cherryPrice << ")" << endl;
    }
    
    // Get the fruit choice from the user.
    int fruitChoice = getValidChoice("Enter the number of the fruit you want to buy: ", 1, 5);
    
    // Prompt for quantity and validate using a while loop.
    cout << "Enter quantity to buy: ";
    int quantity;
    cin >> quantity;
    while (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number: ";
        cin >> quantity;
    }
    
    double cost = 0.0;
    // Determine cost based on fruit chosen.
    switch (fruitChoice) {
        case 1:
            cost = calculateCost(applePrice, quantity);
            break;
        case 2:
            cost = calculateCost(bananaPrice, quantity);
            break;
        case 3:
            cost = calculateCost(blueberryPrice, quantity);
            break;
        case 4:
            cost = calculateCost(orangePrice, quantity);
            break;
        case 5:
            cost = calculateCost(cherryPrice, quantity);
            break;
        default:
            cout << "Invalid fruit choice!" << endl;
            return;
    }
    
    // Check if enough money is available.
    if (money >= cost) {
        // Deduct cost and update the correct fruit count.
        updateMoney(money, -cost);
        switch (fruitChoice) {
            case 1: appleCount += quantity; break;
            case 2: bananaCount += quantity; break;
            case 3: blueberryCount += quantity; break;
            case 4: orangeCount += quantity; break;
            case 5: cherryCount += quantity; break;
        }
        cout << "Purchase successful! You spent $" << cost << endl;
    } else {
        cout << "Not enough money to complete the purchase!" << endl;
    }
}

// locationBSell: Processes the selling of fruit at Location B.
void locationBSell(double &money, int &appleCount, int &bananaCount, int &blueberryCount, int &orangeCount, int &cherryCount,
                   double applePrice, double bananaPrice, double blueberryPrice, double orangePrice, double cherryPrice) {
    cout << "\nWelcome to Location B (Sell Fruit)!" << endl;
    
    // Display fruit menu with selling prices (each price = buy price + $10).
    for (int i = 1; i <= 5; i++) {
        if (i == 1)
            cout << "1. Apple ($" << applePrice + 10 << ")" << endl;
        else if (i == 2)
            cout << "2. Banana ($" << bananaPrice + 10 << ")" << endl;
        else if (i == 3)
            cout << "3. Blueberry ($" << blueberryPrice + 10 << ")" << endl;
        else if (i == 4)
            cout << "4. Orange ($" << orangePrice + 10 << ")" << endl;
        else if (i == 5)
            cout << "5. Cherry ($" << cherryPrice + 10 << ")" << endl;
    }
    
    // Get the fruit choice from the user.
    int fruitChoice = getValidChoice("Enter the number of the fruit you want to sell: ", 1, 5);
    
    // Prompt for quantity to sell and validate it.
    cout << "Enter quantity to sell: ";
    int quantity;
    cin >> quantity;
    while (quantity <= 0) {
        cout << "Invalid quantity. Please enter a positive number: ";
        cin >> quantity;
    }
    
    double revenue = 0.0;
    // Check if there is enough inventory for the chosen fruit; if so, calculate revenue.
    switch (fruitChoice) {
        case 1:
            if (appleCount < quantity) {
                cout << "Not enough apples to sell!" << endl;
                return;
            }
            revenue = calculateCost(applePrice + 10, quantity);
            appleCount -= quantity;
            break;
        case 2:
            if (bananaCount < quantity) {
                cout << "Not enough bananas to sell!" << endl;
                return;
            }
            revenue = calculateCost(bananaPrice + 10, quantity);
            bananaCount -= quantity;
            break;
        case 3:
            if (blueberryCount < quantity) {
                cout << "Not enough blueberries to sell!" << endl;
                return;
            }
            revenue = calculateCost(blueberryPrice + 10, quantity);
            blueberryCount -= quantity;
            break;
        case 4:
            if (orangeCount < quantity) {
                cout << "Not enough oranges to sell!" << endl;
                return;
            }
            revenue = calculateCost(orangePrice + 10, quantity);
            orangeCount -= quantity;
            break;
        case 5:
            if (cherryCount < quantity) {
                cout << "Not enough cherries to sell!" << endl;
                return;
            }
            revenue = calculateCost(cherryPrice + 10, quantity);
            cherryCount -= quantity;
            break;
        default:
            cout << "Invalid fruit choice!" << endl;
            return;
    }
    
    // Update player's money with the revenue from selling.
    updateMoney(money, revenue);
    cout << "Sale successful! You earned $" << revenue << endl;
}
