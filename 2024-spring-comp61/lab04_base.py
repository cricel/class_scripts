def roll_die():
    # Hint:
    # - Generate and return a random integer between 1 and 6.
    # - Use the random module (random.randint).
    pass # you can delete this line when you actually start writing code for this section


def roll_multiple_dice(num_dice):
    # Hint:
    # - Roll the die 'num_dice' times.
    # - Store each roll in a list.
    # - Calculate and return the total of all rolls.
    # - Print the rolled values for the player to see.
    pass # you can delete this line when you actually start writing code for this section


def get_round_result(player_total, computer_total):
    # Hint:
    # - Compare player_total and computer_total.
    # - Return:
    #     "Win" if player_total > computer_total,
    #     "Draw" if they are equal,
    #     "Loss" if computer_total > player_total.
    pass # you can delete this line when you actually start writing code for this section


def shop(score):
    # Hint:
    # - Show a menu with three options:
    #     1. Add +5 points (Cost: 5 points)
    #     2. Add +15 points (Cost: 10 points)
    #     3. Exit Shop
    # - Ask for user input to select an option.
    # - Check if the player has enough points before applying bonuses.
    # - Return the updated score.
    pass # you can delete this line when you actually start writing code for this section


def display_statistics(rounds, wins, draws, losses, score, round_numbers, player_totals, computer_totals, results):
    # Hint:
    # - Print:
    #     - Total rounds played
    #     - Number of wins, draws, and losses
    #     - Final score
    # - Use a loop to display the history of all rounds:
    #     Round X: Player Total: Y vs Computer Total: Z -> Result
    pass # you can delete this line when you actually start writing code for this section


# --------------------------------------------------------------
# -----------------------main logic-----------------------------
# 1. Import the random module.
# 2. Initialize the random number generator using random.seed().
# 3. Create and initialize variables:
#     - score: integer (starting at 0)
#     - rounds, wins, draws, losses: integers for game stats
# 4. Create empty lists to track:
#     - round_numbers
#     - player_totals
#     - computer_totals
#     - results

# --------------------------------------------------------
# Main Game Loop (while loop until the player chooses to stop)
# --------------------------------------------------------
# 1. Increment the round counter.
# 2. Ask if the player wants to visit the shop:
#     - If yes, call shop(score) and update the score.
# 3. Display the round number.
# 4. Call roll_multiple_dice(2) to get the player's total.
# 5. Call roll_multiple_dice(2) to get the computer's total.
# 6. Call get_round_result(player_total, computer_total) to get the round result.
# 7. Update:
#     - wins, draws, losses counters based on the result.
#     - score:
#         +20 points for a win
#         +10 points for a draw
#         +0 points for a loss
# 8. Append the round details to the corresponding lists:
#     - round_numbers, player_totals, computer_totals, results
# 9. Print the round result and the current score.
# 10. Ask if the player wants to play another round:
#     - If no, break out of the loop.

# --------------------------------------------------------
# Final Statistics
# --------------------------------------------------------
# - After exiting the loop:
#     - Call display_statistics(...) with all necessary variables and lists.
#     - Show the final results and round history.

