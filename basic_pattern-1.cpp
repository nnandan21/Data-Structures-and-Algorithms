#include <iostream>
using namespace std;

int main() {
    int n;     // Number of rows for the pattern
    cin>>n;     //taking input for number of rows 
    int i,j;   // Loop variables for rows and columns

    // Outer loop for each row
    for(i=1;i<=n;i++){
        // Inner loop for each column in the current row
        for(j=1;j<=i;j++){
            cout<<"* ";  // Print a star and a space
        }
        cout<<endl;  // Move to the next line after completing a row
    }

    return 0;
}


/* 

input : 4
output: 
        *
        * *
        * * *
        * * * *
*/