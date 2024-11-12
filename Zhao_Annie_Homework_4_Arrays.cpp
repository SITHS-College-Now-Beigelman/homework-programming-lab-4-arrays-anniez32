// Annie Zhao
// Homework 4: Arrays
// November 12, 2024

#include <iostream>
using namespace std;

// Create function filterEvens for Exercise #1
int filterEvens(int a, int b, int c, int d, int e, int f, int g, int h);

int main () {

    // Exercise #1:
    int myArray[8]; // Declare an array named myArray with 8 components of the type int
    
    // Get user input for the 8 values of array
    cout << "Input 8 values for the 8 components of the array: ";
    cin >> myArray[0], myArray[1], myArray[2], myArray[3], myArray[4], myArray[5], myArray[6], myArray [7];


    return 0;
}

int filterEvens(int a, int b, int c, int d, int e, int f, int g, int h) {
    if (a % 2 == 0)
        cout << a;
    if (b % 2 == 0)
        cout << b;
    if (c % 2 == 0)
        cout << c;
    if (d % 2 == 0)
        cout << d;
    if (e % 2 == 0)
        cout << e;
    if (f % 2 == 0)
        cout << f;
    if (g % 2 == 0)
        cout << g;
    if (h % 2 == 0)
        cout << h;
}