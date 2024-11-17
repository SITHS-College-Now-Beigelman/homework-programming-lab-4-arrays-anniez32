// Annie Zhao
// Homework 4: Arrays
// November 12, 2024


#include <iostream>
#include <string>
using namespace std;

// Exercise # 1
/*
// Create function filterEvens 
void filterEvens(int& a) {
    if (a == 0) // Seperate the numbers that started as zero as to not confused it with the marked odd numbers
        a = 1;  // Mark the zeros as 1, so that it doesn't get confused with any other numbers
    else if (a % 2 != 0)
        a = 0; // If the number is odd, mark it as a zero 
}

int main () {

    // Exercise #1:
    int myArray[8]; // Declare an array named myArray with 8 components of the type int
    int i; // Variable for loop when printing the even numbers
    // Get user input for the 8 values of array
    cout << "Input 8 values for the 8 components of the array: " << endl;

    for (i = 0; i < 8; i++){ // Input the numbers one by one
        cout << "Input one number: ";
        cin >> myArray[i];
    }

    // Display all of the even numbers in the array
    // Print out the even numbers
    cout << "The even numbers are: ";
    i = 0;
    for (i=0; i<8; i++){ // loop through the array
        filterEvens(myArray[i]);
        if (myArray[i] == 1) // 1 represents the number 0
            cout << "0, ";
        else if (myArray[i] != 0) // If the number is not marked as a zero, it is even
            cout << myArray[i] << ", ";
    }
    return 0;
}
*/
// Output for Exercise 1
/*
Input 8 values for the 8 components of the array: 
Input one number: 0
Input one number: 2
Input one number: 5
Input one number: 6
Input one number: 8
Input one number: 3
Input one number: 4
Input one number: 6
The even numbers are: 0, 2, 6, 8, 4, 6,
*/

// Exercise #2
/*
int main() {
    // Array
    int cars[10] = {7, 3, 6, 0, 14, 8, 1, 2, 9, 8};

    int total=0; // Variable for the total number of cars sold in the entire dealership
    int x; // Variable for loop

    for (x = 0; x < 10; x++){
        total += cars[x];
    }
    cout << "The total number of cars sold in the dealership is: " << total << endl;

    // Find who sold the most cars
    int most = 0; // Variable for most cars sold
    int salesperson = 0; // Variable for the salesperson who sold the most cars

    for(x=0; x<10; x++) {
        if (cars[x] > most) {
            most = cars[x];
            salesperson = x;
        }
    }
    cout << "Salesperson " << salesperson << " sold the most cars. They sold " << most << " cars." << endl;
    return 0;
}
*/
// Output for Exercise 2
/*
The total number of cars sold in the dealship is: 58
Salesperson 4 sold the most cars. They sold 14 cars. 
*/
// Exercise 4:

// Function for turning the dna into rna
void dna_to_rna(char& dna, char& rna) {
    if (dna == 'A')
        rna = 'U';
    else if (dna == 'C')
        rna = 'G';
    else if (dna == 'G')
        rna = 'C';
    else if (dna == 'T')
        rna = 'A';
    else
        rna = '0'; // Mark the non DNA characters with 0
}

int main() {
    // Variable(s)
    string dna;
    // Get input
    cout << "Please input the DNA: ";
    getline(cin, dna);

    char dnaArray[dna.length()]; // Declare an array with the length of the DNA
    int x = 0; // Variable for loop
    char rnaArray[dna.length()]; // Declare an array for the RNA conversion to print

    // Putting the string into the array
    for (x=0; x<dna.length(); x++) {
        dnaArray[x] = dna[x];
    }

    // Using function dna_to_rna to convert the array
    cout << "The RNA is: ";
    for (x=0; x<dna.length(); x++) {
        dna_to_rna(dnaArray[x],rnaArray[x]);
        if (rnaArray[x] != '0') // If the character is not marked, print it
            cout << rnaArray[x];
        }
    return 0;
}
// Output for exercise 4:
/*
Please input the DNA: A42%
The RNA is: U
*/



