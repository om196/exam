#include <iostream>

long product(int* arr, int n) {
    if (n < 1) {
        return -1;
    }

    long solution = 1;
    for (int a = 0; a < n; a++) {
        solution *= arr[a];
    }

    return solution;
}



