#include <iostream>

long product(int* arr, int n) {
    if (n < 1) { // will work only if the size of the array is less than 1.
        return -1; // Return -1 to indicate a invalid input.
    }

    long solution = 1; // Initialize a variable to store the product of the array elements.
    for (int a = 0; a < n; a++) { 
        solution *= arr[a]; // will Multiply the current element with the product.
    }

    return solution; // Return the final answer
}

