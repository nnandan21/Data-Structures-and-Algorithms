#include <iostream>
using namespace std;

int main() {
    int n ;// Define the number of rows in the pattern
    cin>>n;//taking input of n
    // Outer loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print numbers in each row
        for (int j = 1; j <= 6 - i; j++) {
            cout << j << " "; // Print the current number followed by a space
        }
        cout << endl; // Move to the next line after each row is printed
    }

    return 0; // Exit the program
}
