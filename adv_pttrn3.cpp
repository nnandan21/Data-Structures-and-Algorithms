#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // Read the value of 'n' from the user

    // Outer loop to iterate through each row
    for (int i = 1; i <= n; i++) {
        // Inner loop to print spaces before the asterisks
        for (int j = 1; j <= n - i; j++) {
            cout << "  "; // Print two spaces for alignment
        }
        
        // Print a row of five asterisks
        cout << "* * * * *";
        
        cout << endl; // Move to the next line after each row is printed
    }

    return 0; // Exit the program
}
