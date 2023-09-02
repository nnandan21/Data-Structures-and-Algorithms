#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n; // Input the value of 'n'

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            // Check if the sum of 'i' and 'j' is even
            if((i + j) % 2 == 0){
                cout << "1 "; // If even, print '1'
            }
            else{
                cout << "0 "; // If odd, print '0'
            }
        }
        cout << endl; // Move to the next line after each row
    }

    return 0; // Return 0 to indicate successful execution
}
