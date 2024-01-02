class Solution {

    // Main method to start solving the Sudoku puzzle
    public void solveSudoku(char[][] board) {
        solve(0, 0, board, board.length);
    }

    // Recursive method to solve the Sudoku puzzle
    private boolean solve(int currentRow, int currentCol, char[][] board, int n) {
        // Check if the current row is equal to the board size, indicating the puzzle is
        // solved
        if (currentRow == n) {
            return true;
        }

        int nextRowIndex = -1;
        int nextColIndex = -1;

        // Determine the indices for the next cell in the puzzle
        if (currentCol != n - 1) {
            nextRowIndex = currentRow;
            nextColIndex = currentCol + 1;
        } else {
            nextRowIndex = currentRow + 1;
            nextColIndex = 0;
        }

        // If the current cell is not empty ('.'), move to the next cell
        if (board[currentRow][currentCol] != '.') {
            return solve(nextRowIndex, nextColIndex, board, n);
        }

        // Try filling the current cell with values from '1' to '9'
        for (char currentVal = '1'; currentVal <= '9'; currentVal++) {
            // Check if the current value is valid for the current cell
            if (isValid(currentRow, currentCol, board, currentVal, n)) {
                // Place the valid value in the current cell
                board[currentRow][currentCol] = currentVal;

                // Recursively try to solve the puzzle with the updated board
                if (solve(nextRowIndex, nextColIndex, board, n)) {
                    return true; // If the puzzle is solved, return true
                }

                // If the puzzle is not solved with the current value, backtrack and try the
                // next value
                board[currentRow][currentCol] = '.'; // Backtrack
            }
        }

        // If no valid value is found, backtrack to the previous cell
        return false;
    }

    // Check if placing a value in the current cell is valid
    public boolean isValid(int currentRow, int currentCol, char[][] board, int currentVal, int n) {
        // Check if the value is valid in the current row, column, and subgrid
        if (isRowValid(currentRow, board, currentVal, n) &&
                isColValid(currentCol, board, currentVal, n) &&
                isSubGridValid(currentRow, currentCol, board, n, currentVal)) {
            return true;
        }
        return false;
    }

    // Check if placing a value in the current row is valid
    public boolean isRowValid(int currentRow, char[][] board, int currentVal, int n) {
        for (int currentCol = 0; currentCol < n; currentCol++) {
            if (board[currentRow][currentCol] == currentVal) {
                return false; // Value is already present in the current row
            }
        }
        return true; // Value is valid in the current row
    }

    // Check if placing a value in the current column is valid
    public boolean isColValid(int currentCol, char[][] board, int currentVal, int n) {
        for (int currentRow = 0; currentRow < n; currentRow++) {
            if (board[currentRow][currentCol] == currentVal) {
                return false; // Value is already present in the current column
            }
        }
        return true; // Value is valid in the current column
    }

    // Check if placing a value in the current subgrid is valid
    public boolean isSubGridValid(int currentRow, int currentCol, char[][] board, int n, int currentVal) {
        int startRow = 3 * (currentRow / 3);
        int startCol = 3 * (currentCol / 3);

        // Check the 3x3 subgrid for the presence of the current value
        for (int i = startRow; i <= startRow + 2; i++) {
            for (int j = startCol; j <= startCol + 2; j++) {
                if (board[i][j] == currentVal) {
                    return false; // Value is already present in the current subgrid
                }
            }
        }
        return true; // Value is valid in the current subgrid
    }
}

// Time Complexity: O(9^N) in the worst case
// Space Complexity:O(N)
// Author: Mitesh Tiwari