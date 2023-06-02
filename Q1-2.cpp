int countOddEven(int** matrix, int nRows, int nCols, bool even) {
    int total = 0;
    for (int a = 0; a < nRows; a++) {
        for (int b = 0; b < nCols; b++) {
            if (even && matrix[a][b] % 2 == 0) {
                total++;
            } else if (!even && matrix[a][b] % 2 != 0) {
                total++;
            }
        }
    }
    return total;
}
