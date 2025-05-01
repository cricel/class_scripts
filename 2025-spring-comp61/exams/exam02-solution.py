# ================= #
# Library Management System Solution
# ================= #

# Define a class to store book information
class Book:
    def __init__(self, title, author, pages):
        self.title = title
        self.author = author
        self.pages = pages

# Define the Library class to manage a collection of books
class Library:
    def __init__(self):
        self.catalog = {}

    def add_book(self, book):
        self.catalog[book.title] = book

    def count_total_pages(self):
        books = list(self.catalog.values())
        return self._recursive_page_sum(books, 0)

    def _recursive_page_sum(self, books, index):
        if index >= len(books):
            return 0
        return books[index].pages + self._recursive_page_sum(books, index + 1)

    def shelf_layout(self, books_per_row=2):
        layout = []
        titles = list(self.catalog.keys())
        for i in range(0, len(titles), books_per_row):
            layout.append(titles[i:i + books_per_row])
        return layout

# Main program
library = Library()

# Input loop to gather book info from the user
while True:
    title = input("Enter book title (or 'done' to finish): ").strip()
    if title.lower() == "done":
        break
    author = input("Enter author: ").strip()
    try:
        pages = int(input("Enter pages: ").strip())
    except ValueError:
        print("Invalid page number. Please enter an integer.")
        continue

    book = Book(title, author, pages)
    library.add_book(book)

# Output results
print("\nTotal pages in library:", library.count_total_pages())
print("Shelf Layout (2D Array of Book Titles):")
layout = library.shelf_layout()
for row in layout:
    print(row)
