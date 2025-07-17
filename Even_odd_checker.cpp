#include <iostream>
using namespace std;
int main() {
    
    int num1;
    cout << "Please enter first number : ";
    cin >> num1;
    
    if(num1 % 2 == 0) cout << "The number "<< num1 << " is even";
    else cout<< "The number "<< num1 << " is odd";
    return 0;
}

/*
========OUTPUT==========
Please enter first number : 24
The number 24 is even

=== Code Execution Successful ===

Please enter first number : 55
The number 55 is odd

=== Code Execution Successful ===
*/
