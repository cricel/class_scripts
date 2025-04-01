import random

# Constants to represent cell states
EMPTY = 0
SHIP = 1
HIT = -1
MISS = -2

# Battlefield size
GRID_SIZE = 10

def initialize_battlefield():
    """
    Creates and returns a 10x10 grid initialized to EMPTY (0).
    """
    # TODO: 
    # 1. Create a list to hold 10 rows.
    # 2. For each row, create a list of 10 EMPTY (0) cells.
    # 3. Return the 2D list.
    return []


def can_place_ship(battlefield, row, col, size, horizontal):
    """
    Returns True if a ship of a given size can be placed at the specified position.
    It should not go out of bounds or overlap with existing ships.
    """
    # TODO:
    # 1. Check if the ship will stay within the grid bounds.
    #    - If horizontal, ensure col + size <= GRID_SIZE
    #    - If vertical, ensure row + size <= GRID_SIZE
    # 2. Check each cell in the path where the ship would go.
    #    - If any of those cells already contains a ship, return False.
    # 3. If all checks pass, return True.
    return False


def place_ship(battlefield, row, col, size, horizontal):
    """
    Places a ship of a given size at the specified location on the battlefield.
    Modifies the battlefield in place.
    """
    # TODO:
    # 1. Based on the orientation (horizontal or vertical),
    #    update the correct number of cells to SHIP.
    # 2. Make sure the loop updates the grid at the right locations.


def randomly_place_ships(battlefield):
    """
    Randomly places 6 ships on the battlefield:
    - Two ships of size 2
    - Two ships of size 3
    - Two ships of size 5
    """
    ship_sizes = [2, 2, 3, 3, 5, 5]

    # TODO:
    # 1. Loop through each ship size in the ship_sizes list.
    # 2. For each ship:
    #    a. Use a loop to repeatedly try placing the ship until it fits.
    #    b. Randomly select a row (0–9) and column (0–9).
    #    c. Randomly select orientation (horizontal = True or False).
    #    d. Use can_place_ship() to check if it fits.
    #    e. If it fits, call place_ship() to place it.


def display_battlefield(battlefield, reveal_ships=False):
    """
    Displays the battlefield to the console.
    If reveal_ships is True, also show ship positions.
    """
    print("   " + " ".join(str(i) for i in range(GRID_SIZE)))
    for i, row in enumerate(battlefield):
        row_display = []
        for cell in row:
            if cell == HIT:
                row_display.append("H")
            elif cell == MISS:
                row_display.append("M")
            elif cell == SHIP and reveal_ships:
                row_display.append("S")
            else:
                row_display.append("~")
        print(f"{i:<2} " + " ".join(row_display))


def ships_remaining(battlefield):
    """
    Returns the number of ship segments still unhit.
    """
    # TODO:
    # 1. Loop through every row in the battlefield.
    # 2. For each row, loop through each cell.
    # 3. Count how many cells have the value SHIP.
    # 4. Return that count.
    return 0


def play_game():
    """
    Main game loop. Continues until all ships are sunk.
    """
    print("Welcome to Battleship!")
    print("Enter coordinates to attack (row and column between 0–9).")
    print("Enter -1 -1 to reveal all ships (cheat/debug mode).\n")

    # Step 1: Initialize battlefield
    battlefield = initialize_battlefield()

    # Step 2: Place ships
    randomly_place_ships(battlefield)

    # Step 3: Gameplay loop
    while ships_remaining(battlefield) > 0:
        display_battlefield(battlefield)

        try:
            coords = input("Enter row and column: ").split()
            if len(coords) != 2:
                raise ValueError
            row, col = map(int, coords)
        except ValueError:
            print("Invalid input. Please enter two integers.")
            continue

        # Debug mode
        if row == -1 and col == -1:
            print("\n[DEBUG MODE] Revealing all ships:")
            display_battlefield(battlefield, reveal_ships=True)
            continue

        # Check bounds
        if not (0 <= row < GRID_SIZE and 0 <= col < GRID_SIZE):
            print("Invalid coordinates. Try again.")
            continue

        # TODO: Attack Logic
        # 1. Get the current value at battlefield[row][col].
        # 2. If it's SHIP:
        #    - Change it to HIT.
        #    - Print "Hit!"
        # 3. If it's EMPTY:
        #    - Change it to MISS.
        #    - Print "Miss!"
        # 4. If it's already HIT or MISS:
        #    - Print "You already attacked this location."

    # End of game
    print("\nCongratulations! You sank all the ships!")
    print("Final battlefield:")
    display_battlefield(battlefield, reveal_ships=True)


# Program entry point
if __name__ == "__main__":
    play_game()
