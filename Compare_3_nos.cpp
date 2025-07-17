#include <iostream>
using namespace std;
int main() {
    
    int num1 , num2 , num3;
    cout << "Please Enter the First number : ";
    cin >> num1;
    cout << "Please Enter the Second number : ";
    cin >> num2;
    cout << "Please Enter the Third number : ";
    cin >> num3;
    
    
    if(num1 >= num2 && num1 > num3) cout << "The number " <<num1 << " Is the largest";
    else if(num2 > num1 && num2 >= num3) cout << "The number " <<num2 << " Is the largest";
    else if(num3 >= num1 && num3 > num2) cout << "The number " <<num3 << " Is the largest";
    else if(num2 == num1 && num2 == num3) cout << "All The numbers are equal ";
    return 0;
}

/*
=========OUTPUT==============
Please Enter the First number : 22
Please Enter the Second number : 77
Please Enter the Third number : 21
The number 77 Is the largest

=== Code Execution Successful ===

Please Enter the First number : 22
Please Enter the Second number : 22
Please Enter the Third number : 33
The number 33 Is the largest

=== Code Execution Successful ===
*/
