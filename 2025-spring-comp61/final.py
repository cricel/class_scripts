# 🧪 Virus Outbreak Simulation (Updated for Your Class)
# 1. Overview
# In this project, you will simulate a virus outbreak in a city represented as a 2D grid. The city is made up of various zones, and the virus spreads recursively from infected humans to adjacent healthy ones unless blocked by walls or quarantine zones. Your task is to model this outbreak using Python classes and simulate multiple rounds of virus spread while tracking infection statistics.

# 2. Problem Breakdown
# City Grid
# Each cell in the grid can be:

# Symbol	Meaning
# "H"	Healthy human
# "I"	Infected human
# "X"	Wall (blocks virus)
# "E"	Empty lot (ignored)
# "Q"	Quarantined human (can’t be infected)

# Class 1: City
# Attributes:
# grid: 2D list of strings
# rows, cols: grid dimensions
# virus_tracker: instance of VirusTracker

# Methods:
# display(): Print the grid
# spread_from(x, y, visited, round_infected): Recursively infect adjacent healthy humans
# simulate_round(round_num): Simulate one round of virus spread
# add_quarantine(x, y): Place a quarantine on a healthy human

# Class 2: VirusTracker
# Attributes:
# total_infected: total across all rounds
# round_stats: dict of infection counts per round
# Methods:
# record_infection(round_num, count)
# summary()


# This class keeps track of infection statistics
class VirusTracker:
    def __init__(self):
        # Initialize total infected and a dictionary to track infections per round
        pass

    def record_infection(self, round_num, count):
        # Add count to total and store infection count for the round
        pass

    def summary(self):
        # Print a summary of infection per round and total infections
        pass


# This class represents the 2D city and manages virus spread logic
class City:
    def __init__(self, grid):
        # Store the grid, number of rows and columns
        # Create an instance of VirusTracker
        pass

    def display(self):
        # Print the grid row by row
        pass

    def in_bounds(self, x, y):
        # Return True if (x, y) is inside the grid
        pass

    def spread_from(self, x, y, visited, round_infected):
        # Recursive function to infect neighboring healthy humans
        # If the current cell is "H", turn it into "I", mark visited,
        # add to round_infected, and recurse on all 4 directions (up, down, left, right)
        pass

    def simulate_round(self, round_num):
        # Create a 2D visited grid (same size as the city)
        # For each cell in the grid:
        #   If it's infected ("I") and not visited, call spread_from on it
        # Record the number of new infections using VirusTracker
        # Return False if no new infections occurred; True otherwise
        pass

    def add_quarantine(self, x, y):
        # If the cell at (x, y) is a healthy human, change it to "Q"
        # Else, print invalid location message
        pass


# --------------------
# Setup initial grid
# --------------------

# Each cell is:
# "H" = Healthy
# "I" = Infected
# "X" = Wall
# "E" = Empty
# "Q" = Quarantine

grid = [
    ["H", "H", "H", "X", "H"],
    ["H", "X", "H", "H", "H"],
    ["H", "H", "I", "X", "H"],
    ["X", "H", "H", "H", "H"],
    ["H", "X", "H", "H", "H"]
]

# Create the city object
city = City(grid)

# Display the starting city layout
city.display()

# Optional: allow player to place quarantine zones
# Uncomment and test these after implementing add_quarantine()
# city.add_quarantine(0, 0)
# city.add_quarantine(4, 4)

# --------------------
# Run simulation loop
# --------------------

round_num = 1
while city.simulate_round(round_num):
    input("Press Enter to simulate the next round...")
    round_num += 1

# At the end, show total infection stats
city.virus_tracker.summary()




# 🗺️  City Map:
# H H H X H
# H X H H H
# H H I X H
# X H H H H
# H X H H H

# 🚫 Quarantine zone placed at (0, 0)
# 🚫 Quarantine zone placed at (4, 4)

# 🗺️  City Map:
# Q I I X I
# I X I I I
# I I I X I
# X I I I I
# H X I I Q

# Press Enter to simulate the next round...

# 🗺️  City Map:
# Q I I X I
# I X I I I
# I I I X I
# X I I I I
# H X I I Q

# ⚠️  No more infections this round.

# 📊 Infection Summary:
# Round 1: 16 infected
# Round 2: 0 infected
# Total infected: 16