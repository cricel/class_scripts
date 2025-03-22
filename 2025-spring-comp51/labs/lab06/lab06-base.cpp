#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Constants for grid size and cell states
const int SIZE = 10;
const int EMPTY = 0;
const int SHIP = 1;
const int HIT = -1;
const int MISS = -2;
const int NUM_SHIPS = 6;
int shipSizes[NUM_SHIPS] = {2, 2, 3, 3, 5, 5}; // Ship lengths

// Step 1: Initialize the battlefield with all cells set to EMPTY
void initializeBattlefield(int battlefield[SIZE][SIZE]) {
    // Use two nested for-loops:
    // Outer loop for rows (i from 0 to SIZE-1)
    // Inner loop for columns (j from 0 to SIZE-1)
    // Set each battlefield[i][j] = EMPTY
}

// Step 2: Check if a ship of given length can be placed at a position
bool canPlaceShip(int battlefield[SIZE][SIZE], int row, int col, int length, bool horizontal) {
    // If horizontal is true:
    //   - Check if col + length > SIZE (ship would go out of bounds)
    //   - Loop through the cells from [row][col] to [row][col+length-1]
    //     and make sure each one is EMPTY
    //
    // If horizontal is false (vertical):
    //   - Check if row + length > SIZE
    //   - Loop through [row][col] to [row+length-1][col] to ensure EMPTY
    //
    // If all checks pass, return true. Otherwise, return false.
    return false;
}

// Step 3: Place a ship on the grid by marking its cells with SHIP (1)
void placeShip(int battlefield[SIZE][SIZE], int row, int col, int length, bool horizontal) {
    // Use a loop to mark all cells with SHIP:
    // - If horizontal, loop i from 0 to length-1 and set battlefield[row][col+i] = SHIP
    // - If vertical, loop i from 0 to length-1 and set battlefield[row+i][col] = SHIP
}

// Step 4: Place all ships randomly on the battlefield
void randomlyPlaceShips(int battlefield[SIZE][SIZE]) {
    // Use srand(time(0)) to seed random generator (only once at start)
    // For each ship size in shipSizes array:
    //   - Generate a random row (0–9), column (0–9), and direction (true = horizontal, false = vertical)
    //   - Use canPlaceShip() to check validity
    //   - If valid, call placeShip(); else, try a new random position until it works
}

// Step 5: Display the battlefield
void displayBattlefield(int battlefield[SIZE][SIZE], bool revealShips = false) {
    // Print column headers (0 1 2 ... 9)
    // For each row:
    //   - Print row number
    //   - For each cell:
    //     - If HIT, print "H"
    //     - If MISS, print "M"
    //     - If SHIP and revealShips is true, print "S"
    //     - Otherwise, print "~" to indicate unknown
}

// Step 6: Check if all ships are sunk
bool allShipsSunk(int battlefield[SIZE][SIZE]) {
    // Loop through the grid
    // If any cell still has SHIP (1), return false
    // If none found, return true
    return false;
}

// Main game logic
int main() {
    int battlefield[SIZE][SIZE];

    // Step 1: Initialize battlefield to all EMPTY
    initializeBattlefield(battlefield);

    // Step 2: Randomly place ships
    randomlyPlaceShips(battlefield);

    cout << "Welcome to Battleship!\n";
    cout << "Enter coordinates to attack (row and column between 0–9).\n";
    cout << "Enter -1 -1 to reveal all ships on the grid.\n\n";

    // Step 3: Gameplay loop
    while (true) {
        // Step 3a: Show current grid
        displayBattlefield(battlefield);

        // Step 3b: Get input from user
        int row, col;
        cout << "Enter row and column: ";
        cin >> row >> col;

        // Step 3c: Reveal ships if -1 -1
        if (row == -1 && col == -1) {
            cout << "\n[DEBUG MODE] Revealing all ships:\n";
            displayBattlefield(battlefield, true);
            continue;
        }

        // Step 3d: Validate input
        if (row < 0 || row >= SIZE || col < 0 || col >= SIZE) {
            cout << "Invalid coordinates. Try again.\n";
            continue;
        }

        // Step 3e: Check for hit or miss
        // If SHIP, change to HIT and print "Hit!"
        // If EMPTY, change to MISS and print "Miss!"
        // If already HIT or MISS, allow it again (no warning)

        // Step 3f: Check if game is over
        if (allShipsSunk(battlefield)) {
            break;
        }
    }

    // Step 4: Game over
    cout << "\nAll ships sunk! You win!\n";
    cout << "Final Battlefield:\n";
    displayBattlefield(battlefield, true);

    return 0;
}
