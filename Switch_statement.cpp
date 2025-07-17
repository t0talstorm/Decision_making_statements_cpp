// Name - Aditya Ishan Sinha 
// PRN - 24070123006
// Batch - EnTC - A1 
// Expt - 5D

#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Enter the colour of the trafic light"<< endl;
    cout << endl <<"1. Red" << endl << "2. Yellow" << endl << "3. Green"<< endl;
    cout << " : ";
    cin >> choice;
    
    switch(choice){
    case 1:
        cout << "You should probably STOP";
        break;
    case 2:
        cout << "You should probably SLOW DOWN";
        break;
    case 3:
        cout << "GO GO GO";
        break;
    }
    

    return 0;
}

/*
================OUTPUT================
Enter the colour of the trafic light

1. Red
2. Yellow
3. Green
 : 2
You should probably SLOW DOWN

Enter the colour of the trafic light

1. Red
2. Yellow
3. Green
 : 3
GO GO GO

=== Code Execution Successful ===
*/
