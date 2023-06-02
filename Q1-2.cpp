
int countOddEven(int** matrix, int nRows, int nCols, bool even) {
    int total = 0; // will start with a variable to track the count.
    for (int a = 0; a < nRows; a++) { // Loop through each row of the matrix
        for (int b = 0; b < nCols; b++) { // Loop through each column of the matrix
            if (even && matrix[a][b] % 2 == 0) { // If "even" is true and the matrix element is even
                total++; // add in the count
            } else if (!even && matrix[a][b] % 2 != 0) { // If "even" is false than the matrix element is odd
                total++; // add in the count 
            }
        }
    }
    return total; // Return the total count
}
