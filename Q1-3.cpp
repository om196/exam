#include <cstring>
#include <cctype>

char* reverseCapitals(char* original, int n) {
    // will genrate a new array to store the capitalized and reversed characters.
    char* answer = new char[n];

    // Iterate through the original array in reverse order.
    for (int a = n - 1; a >= 0; a--) {
        // if the character will be in the lower case it will convert them to capital characters.
        if (std::islower(original[n - 1 - a])) {
            answer[a] = std::toupper(original[n - 1 - a]);
        }
        // if there will be any capital letter will skip and will put space in between.
        else {
            answer[a] = original[n - 1 - a];
        }
    }

    return answer;
}
