# Define the Person class
class Person:
    def __init__(self, name, age):
        # Initialize name and age
        self.name = name
        self.age = age
        self.child = None  # Only one child (no list)

    def add_child(self, child):
        # Assign the given child to this person
        self.child = child

    def print_family_line(self):
        # TODO: Print this person's name and age
        # Then, if they have a child, call this same function on the child
        pass

    def count_large_age_gaps(self, gap_limit):
        # TODO: Count how many parent-child pairs have an age gap > gap_limit
        # Hint:
        # 1. If this person has no child, return 0
        # 2. If there is a child, calculate the age gap: self.age - self.child.age
        # 3. If the gap is greater than the limit, count it
        # 4. Add the result from the child’s recursive call
        # 5. Return the total count
        pass


def build_family_line():
    # TODO: Ask the user for the person's name
    # TODO: Ask the user for the person's age
    # TODO: Create a Person object with that name and age

    # TODO: Ask the user if this person has a child (yes or no)

    # If the user says "yes":
        # TODO: Recursively call build_family_line() to create the child
        # TODO: Add the child to the current person using add_child()

    # TODO: Return the person object
    pass


# --- Main Program Starts Here ---
print("Welcome to the Generational Gap Checker!\n")

# TODO: Build the family line from user input
root = build_family_line()

print("\nHere is your family line:\n")
# TODO: Call the function to print the family line

# TODO: Ask the user for an age gap value
# TODO: Call the function to count large age gaps and print the result
