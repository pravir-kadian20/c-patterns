// PATTERN NUMBERS & STARS - 2
// Take as input N, a number. Print the pattern as given in the input and output section.

// Input Format:
// Enter value of N

// Constraints:
// Output Format
// Print the pattern.

// Sample Input
// 7
// Sample Output
//  1******
//  12*****
//  123****
//  1234***
//  12345**
//  123456*
//  1234567
#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int rows=1;rows<=n;rows++){
        for(int col=1;col<=rows;col++){
            cout << col;
        }
        for(int str=n-rows;str>0;str--){
            cout << "*";
        }
        cout << endl;
    }
	return 0;
}