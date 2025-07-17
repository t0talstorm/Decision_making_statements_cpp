// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 5B


#include <iostream>
using namespace std;
int main() {
    
    char character;
    cout << "Please Enter a single character : ";
    cin >> character;
    
    char character1 = tolower(character);
    
    if(character1 == 'a' || character1 == 'e' ||character1 == 'i' ||character1 == 'o' ||character1 == 'u') {
        cout << "The Character "<< character << " is a vovel";
    }else cout<< "The character "<< character << " is Consonant";
    return 0;
}

/*
=========OUTPUT==========
Please Enter a single character : H
The character H is Consonant

=== Code Execution Successful ===

Please Enter a single character : E
The Character E is a vovel

=== Code Execution Successful ===
*/
