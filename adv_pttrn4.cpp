#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the value of 'n' from the user

    // Outer loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print spaces before the numbers
        for (int j = n - i; j >= 1; j--) {
            cout << " "; // Print a space for alignment
        }
        
        // Inner loop to print numbers in ascending order
        for (int j = 1; j <= i; j++) {
            cout << j << " "; // Print the current number followed by a space
        }

        cout << endl; // Move to the next line after each row is printed
    }

    return 0; // Exit the program
}
