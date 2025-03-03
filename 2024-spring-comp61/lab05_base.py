import random
import time

class Library:
    def __init__(self):
        """Initialize the library with rooms and books using lists."""
        # TODO: Create a list of room names (one room for each book)
        self.rooms = []  # Example: ["Hall of Magic", "Chamber of Science", "Dungeon of Code"]
        
        # TODO: Create a list of books, matching the rooms (each book corresponds to the same index in self.rooms)
        self.books = []  # Example: ["Grimoire of Spells", "Physics of the Cosmos", "Mastering Python"]
        
        # TODO: Create a variable to track knowledge points (start with 0)
        self.knowledge_points = 0

    def display_books(self):
        """Display available books and their locations in the library."""
        print("\n📚 Available Books in the Library:")
        # TODO: Loop through both lists and print available books with their rooms
        

    def borrow_book(self, room_name):
        """Allow the player to borrow a book from a specified room."""
        # TODO: Find the room index in self.rooms
        

        # TODO: Get the corresponding book name and check if it's available
        

        # TODO: Handle cursed books (lose 2 knowledge points)
        

        # TODO: Add a 30% chance of challenge before borrowing the book
        

        # TODO: Otherwise, allow the book to be borrowed and add 1 knowledge point
        

    def return_book(self, book_name):
        """Allow the player to return a book to the library."""
        # TODO: Find an empty slot in self.books to return the book
        

        # TODO: Increase knowledge points when a book is returned
        

    def solve_challenge(self):
        """Ask the player a random question as a challenge to borrow certain books."""
        # TODO: Create a list of challenge questions and answers
        

        # TODO: Pick a random question
        

        # TODO: Ask the user the question and check if they answer correctly
        

# --------- Game Loop ---------
print("\n🏛 Welcome to the Grand Library of Eldoria!")
player_name = input("🎭 Enter your name, adventurer: ")

library = Library()

while library.knowledge_points < 10:
    library.display_books()
    action = input("\n🔹 Choose an action: [1] Borrow a book [2] Return a book [3] Exit: ")

    if action == "1":
        room_choice = input("🏛 Enter the room name to explore: ")
        # TODO: Call the borrow_book function
        

    elif action == "2":
        book_name = input("📖 Enter the name of the book you're returning: ")
        # TODO: Call the return_book function
        

    elif action == "3":
        print("\n👋 You leave the library. Thanks for playing!")
        break

    else:
        print("❌ Invalid choice! Try again.")

    time.sleep(1)  # Short delay for better game pacing

print("\n🎉 Congratulations! You have become a Master Scholar!")
