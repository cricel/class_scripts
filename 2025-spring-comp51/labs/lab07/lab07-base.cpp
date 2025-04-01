#include <iostream>
#include <string>
using namespace std;

const int MAX = 10;

// Set maze dimensions
const int rows = 4;
const int cols = 4;

// TODO Step 1: Define movement directions for Right, Down, Left, Up
// Use dx[i] and dy[i] to move in the maze.
// Example: dx[0], dy[0] should move Right (same row, next column)
int dx[] = { /* Fill this */ };
int dy[] = { /* Fill this */ };
string dir[] = {"Right", "Down", "Left", "Up"};

// TODO Step 2: Implement isSafe()
// Returns true if the position (x, y) is within bounds, not a wall, and not visited
bool isSafe(int x, int y, char maze[MAX][MAX], bool visited[MAX][MAX]) {
    // Example conditions:
    // - 0 <= x < rows
    // - 0 <= y < cols
    // - maze[x][y] is not '#'
    // - visited[x][y] is false
    return false; // Replace with actual condition
}

// TODO Step 3: Implement the recursive backtracking function
// pathSoFar is a string that builds the list of moves taken so far
// pathCount should be incremented and printed when you reach 'E'
void findPaths(char maze[MAX][MAX], int x, int y, string pathSoFar,
               bool visited[MAX][MAX], int& pathCount) {
    // Base case: if current cell is 'E', print the path and return

    // Mark current cell as visited

    // Try all 4 directions (loop through 0 to 3):
    // - Calculate newX = x + dx[i], newY = y + dy[i]
    // - If safe, recursively call findPaths with updated path

    // Backtrack: unmark current cell as visited
}

// TODO Step 4: Implement the solveMaze() function
// This should:
// - Find the position of 'S' in the maze
// - Create and initialize a visited array
// - Call findPaths() from the start position
// - Print "No paths found..." if no path is found
void solveMaze(char maze[MAX][MAX]) {
    // int startX = -1, startY = -1;

    // 1. Search for the start cell 'S'
    //    Loop through the maze to find the coordinates

    // 2. If start not found, print an error and return

    // 3. Declare visited[MAX][MAX] and initialize to false

    // 4. Initialize pathCount = 0

    // 5. Call findPaths(...) with start position and empty path string

    // 6. If no path was found, print: "No paths found from S to E."
}

int main() {
    // Sample 4x4 maze; feel free to modify for more test cases
    char maze[MAX][MAX] = {
        {'S', ' ', ' ', '#'},
        {'#', ' ', '#', ' '},
        {'#', ' ', ' ', ' '},
        {'#', '#', ' ', 'E'}
    };

    solveMaze(maze);

    return 0;
}
