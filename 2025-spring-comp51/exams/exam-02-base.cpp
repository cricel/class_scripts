// ================= //
// 0. Hint
// ================= //
// As you go through the code, you can comment and uncomment different parts to focus on one function at a time, which helps make the overall logic easier to understand.
// If you notice strange behavior in your code, you can insert "cout" statements in various places to print values and help debug by showing what’s happening during execution.

// ================= //
// 1. Overview
// ================= //
// You are tasked with building a mini library management system using C++ classes and basic arrays. This system will:
// - Accept book details (title, author, and page count) from the user
// - Store book information using a Book class
// - Store and manage up to 10 books using a Library class
// - Use call by reference to calculate total pages
// - Display a 2D array shelf layout showing book titles, 2 titles per row

// ================= //
// 2. Breakdown
// ================= //
// Your solution must include the following:
// - Book Class
//   - Attributes: title, author, pages
//   - Method: setDetails(string, string, int)
// - Library Class
//   - Contains an array of Book objects
//   - Tracks number of books added with bookCount
//   - Method addBook(Book&) to add a book
//   - Method calculateTotalPages(int&) to calculate total pages using call by reference
//   - Method displayShelfLayout() to
//     - Build a 2D array of book titles (string layout[][])
//     - Use nested loops to print books 2 per row (shelf)
// - In main()
//   - Repeatedly ask the user to enter book data using a while loop
//   - Exit loop if title is "done" or after 10 books
//   - Call calculateTotalPages() using reference variable
//   - Print total number of pages
//   - Call displayShelfLayout() to show 2D layout of book titles

// ================= //
// 3. Stater Code
// ================= //
#include <iostream>
using namespace std;

const int MAX_BOOKS = 10;
const int BOOKS_PER_ROW = 2;

class Book {
    // TODO: init Book class with title, author and pages variable
    void setDetails(xxxxxx) {
        // TODO: Set the book details
    }
};

class Library {
public:
    Book books[MAX_BOOKS];
    int bookCount = 0;

    void addBook(xxxxx) {
        // TODO: Add book to the array if space remains
    }

    void calculateTotalPages(xxxxx) {
        // TODO: Doing some preprocessing on data if needed
        // TODO: Call the recursive helper function to calculate total pages
    }

    xxx sumPagesRecursive(xxxx) {
        // TODO: Write a recursive function that returns the sum of pages
    }

    void displayShelfLayout() {
        // TODO: Step 1: Build a 2D array of book titles (2 per row)
        // TODO: Step 2: Use nested loops to print each title from the 2D array
    }

    int getBookCount() {
        return bookCount;
    }
};

int main() {
    Library library;
    string title, author;
    int pages;

    while (library.getBookCount() < MAX_BOOKS) {
        cout << "Enter book title (or 'done' to finish): ";
        getline(cin, title); 
        // same as cin >> title, but getline(cin, title) will take white space also as part of input, once you hit "Enter", it will record the input into "title" variable. if confuse, try add cout << title to check the result
        if (title == "done") break;

        cout << "Enter author: ";
        getline(cin, author);

        cout << "Enter number of pages: ";
        cin >> pages;

        // TODO: Create a Book object, set its details, and add it to the library
    }

    int totalPages = 0;
    // TODO: Call calculateTotalPages() using call by reference and print result
    cout << "Total Page of all Books: " << totalPages << endl;

    // TODO: Call displayShelfLayout() to print titles in 2D layout
}

// ================= //
// 4. Expected Output
// ================= //
/*
Enter book title (or 'done' to finish): Dune
Enter author: Frank Herbert
Enter pages: 412
Enter book title (or 'done' to finish): 1984
Enter author: George Orwell
Enter pages: 328
Enter book title (or 'done' to finish): Foundation
Enter author: Isaac Asimov
Enter pages: 244
Enter book title (or 'done' to finish): done

Total pages in library: 984
Shelf Layout (2D Array of Book Titles):
['Dune', '1984']
['Foundation']
*/