#include <bits/stdc++.h> // Include all standard headers
#define LL long long    // Define an alias for "long long" data type

using namespace std;

// Function to read a single integer from standard input
LL read() {
    LL x = 0;      // Initialize variable to store the integer
    LL w = 1;      // Initialize variable to store the sign of the integer
    char ch = 0;   // Initialize variable to read characters from input

    // Loop until a digit character is found
    while (ch < '0' || ch > '9') {
        if (ch == '-')  // If the character is a minus sign
            w = -1;     // Change the sign of the integer
        ch = getchar(); // Read the next character
    }

    // Loop until a non-digit character is found
    while (ch >= '0' && ch <= '9') {
        x = x * 10 + (ch - '0'); // Convert the character to an integer and add it to x
        ch = getchar();          // Read the next character
    }

    return x * w;  // Return the integer, multiplied by the sign
}

// Function to print a "long long" integer to standard output
inline void write(LL x) {
    static LL sta[35]; // Initialize an array to store the digits of the integer
    LL top = 0;         // Initialize a variable to store the index of the last digit

    // If the integer is negative, print a minus sign and change the sign of the integer
    if (x < 0) {
        putchar('-');
        x = -x;
    }

    // Loop until all digits of the integer have been stored in the array
    do {
        sta[top++] = x % 10; // Store the last digit of the integer in the array
        x /= 10;             // Remove the last digit from the integer
    } while (x);

    // Loop through the array and print the digits in reverse order
    while (top)
        putchar(sta[--top] + 48); // Print the digit as a character
}

int main() {
    ios::sync_with_stdio(false); // Disable synchronization between C and C++ streams for faster input/output
    cin.tie(nullptr);            // Untie cin and cout streams for faster input/output
    LL n = read();               // Read a single integer from standard input
    write(n);                    // Print the integer to standard output
    return 0;                    // End the program
}
