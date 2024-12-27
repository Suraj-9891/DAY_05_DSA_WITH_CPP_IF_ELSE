#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: Write a program to count the minimum number of notes 
    in a given amount using switch statement.?
    */
    int amount;
    int notes500 = 0, notes100 = 0, notes50 = 0, notes10 = 0, notes5 = 0, notes1 = 0;

    // Input the amount
    cout << "Enter the amount: ";
    cin >> amount;

    // Calculate the number of notes using switch statements
    switch (amount >= 500) {
        case 1:
            notes500 = amount / 500; // notes500 = 510/500 = 1
            amount %= 500;  // 510 % 500 = 10 
    }
    switch (amount >= 100) {
        case 1:
            notes100 = amount / 100;
            amount %= 100;
    }
    switch (amount >= 50) {
        case 1:
            notes50 = amount / 50;
            amount %= 50;
    }
    switch (amount >= 10) {
        case 1:
            notes10 = amount / 10; // notes10 = 
            amount %= 10;
    }
    switch (amount >= 5) {
        case 1:
            notes5 = amount / 5;
            amount %= 5;
    }
    switch (amount >= 1) {
        case 1:
            notes1 = amount;
    }

    // Output the results
    if (notes500 > 0)  // 510 > 0
        cout << "Notes of 500 = " << notes500 << endl;
    if (notes100 > 0) 
        cout << "Notes of 100 = " << notes100 << endl;
    if (notes50 > 0)
        cout << "Notes of 50 = " << notes50 << endl;
    if (notes10 > 0)
        cout << "Notes of 10 = " << notes10 << endl;
    if (notes5 > 0)
        cout << "Notes of 5 = " << notes5 << endl;
    if (notes1 > 0)
        cout << "Notes of 1 = " << notes1 << endl;
    

    /*
    Question 2: Predict the output:
    */
    int a = 5, b, c ;
    b = a = 15 ;
    c = a < 15 ;
    cout << "a = " << a << ", b = " << b << " , c = "<< c ;

    /*
    Q2: Output:
    a = 15 b = 15 c = 0
    */
    
    
    /*
    Question 3: Predict the output 
    */
    int x = 3 ;
    float y = 3.0 ;
    if (x == y)
    cout <<"x and y are equal" ;
    else
    cout << "x and y are not equal" ;

    /*
    Q3: Output:
    x and y are equal
    */

    /*
    Question 4: Predict the output:

    */

    int test = 0;
    cout << "First character " << '1' << endl;
    cout << "Second character " << (test ? 3 : '1') << endl;
  
    /*
    Q4: Output:
        first character 1
        Second charcter 49
    */

   /*
   Question 5: Predict the output:
   */

    int a = 18; int b = 12; 
    bool t = (a > 20 && b < 15)? true : false;
    cout <<"Value of t: " << t ;

    /*
    Q5: Output:
        Value of t : 0
    */

    /*
    Question 6: Predict the 
    */

    int number = -4;
    char result;
    result = number > 0 ? 'P' : 'N';
    cout << result << endl;
    return 0;

    /*
    Q5: Output:
    N
    
    */



}