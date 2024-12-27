#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: Predict the output
    */
    int x = 10, y = 20 ; 
    if (x == y) ; 
    cout << x <<" "<< y ;
    /*
    Q1: Output:
    10 20
    */

   /*
   Question 2:  Given the marks of the student. If the marks 
    are greater than 33 print the result as pass 
    otherwise fail without using if-else statement.
   */
    int marks;
    cout<<"Enter a marks for one subject : "<<endl;
    cin>>marks;
    if(marks>33){
        cout<<"The student is Pass."<<endl;
    }
    else{
        cout<<"The student is fail."<<endl;
    }
    /*
    Q2: Output:
        Enter a marks for one subject : 
        50
        The student is Pass.
    */

   /*
   Question 3: Predict the output:
   
   */

    char x; 
    int a = 2;
    x = (a > 0) ? 'a' : 'S';
    cout << "Value of x : " << x << endl; 
    cout << "Value of a : "<< a;

    /*
    Q3: Output
    Value of x : a
    Value of a : 2 

    */

    /*
    Question 4: Predict the output
    */
    int x;
    x = 5>8 ? 10 : 1!=2<5 ? 20:30;
    cout<<"Value of x : "<<x;

    /*
    Q4: output:
    Value of x : 30
    */

    /*
    Question 5: Predict the output.
    */
    int test = 0;
    float f = 3.111;
    cout << (test > 0 ? f : 0) << endl;

    /*
    Q5: Output:
    0
    */

    /*
    Question 6 : Write a program to input week number(1-7) 
    and print day of week name using switch case
    */
    int day;
    cout<<"Enter a Number for the days (1-7) : ";
    cin>>day;
    switch(day){
          case 1:
        cout<<"Monday";
        break;
        case 2: 
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesay";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default :
        cout<<"Invalid days";

    }
    /*
    Question 7 : Write a program to input month number and 
    print total number of days in month using switch 
    case.
    */
    int n;
    cout<<"Enter the number for the months (1-12) : ";
    cin>>n;
    switch(n){
        case 1:
        cout<<"Jan -->> 31";
        break;
        case 2:
        cout<<"feb -->> 28";
        break;
        case 3:
        cout<<"March -->> 31";
        break;
        case 4:
        cout<<"April -->> 30";
        break;
        case 5:
        cout<<"May -->> 31";
        break;
        case 6:
        cout<<"June -->> 30";
        break;
        case 7:
        cout<<"July -->> 31";
        break;
        case 8:
        cout<<"Aug -->> 31";
        break;
        case 9:
        cout<<"Sep -->> 30";
        break;
        case 10:
        cout<<"Oct -->> 31";
        break;
        case 11:
        cout<<"Nov -->> 31";
        break;
        case 12:
        cout<<"Dec -->> 31";
        break;
    
    }

   /*
   Question 8: Write a program to create a calculator that 
    performs basic arithmetic operations (add, 
    subtract, multiply and divide) using switch case 
    and functions. The calculator should input two 
    numbers and an operator from user.
   */
    int n;
    cout<<"Enter a Number for the (+,-,*,/,%) of this position : "<<endl;
    cin>>n;
    int a,b;
    cout<<"Enter a two Number of (a,b): "<<endl;
    cin>>a>>b;
    switch(n){
        case 1:
        cout<<"The value of a+b = "<<a+b<<endl;
        break;
        case 2:
        cout<<"The value of a-b = "<<a-b<<endl;
        break;
        case 3:
        cout<<"The value of a*b = "<<a*b<<endl;
        break;
        case 4:
        cout<<"The value of a/b = "<<a/b<<endl;
        break;
        case 5:
        cout<<"The value of a/b = "<<a%b<<endl;
        break;
        default:
        cout<<"The number is invalid."<<endl;

    }

    /*
    Q8: output:
        Enter a Number for the (+,-,*,/,%) of this position :
        4
        Enter a two Number of (a,b):
        8 9
        The value of a/b = 0
    */

   /*
   Question 9: Predict the output
   */
    int x = 3, y, z ; 
    y = x = 10 ; 
    z = x < 10 ; 
    cout << "x = “ << x << “y = “ << y << ”z = " << z ;

    /*
    Q10: Output:
        x = 10 y = 10 z = 0 
    */

   /*
   Question 11: Predict the output.

   */
    int k = 35 ; 
    cout <<( k == 35) <<endl << (k == 50) <<endl << (k > 40 ) ;

    /*
    Q11 : Output:
            1
            0
            0
    */

   /*
   Question 12: Predict the output
   */

    int k = 35 ; 
    cout <<( k == 35) <<endl << (k = 50) <<endl << (k > 40 ) ;

    /*
    Q12: Output:
            1
            50
            1
    */

    /*
    Question 13 : Predict the output:

    */
    int i = 65 ;
    char j = 'A' ;
    if ( i == j )
    cout << "P stands for PhysicsWallah" ;
    else
    cout<<"P stands for pwskills" ;

    /*
    Q13: Output:
        P stands for PhysicWallah
    */
    
    
    /*
    Question 14: The Real Thing
    */
    if ( 3 + 2 % 5 ) 
    cout << "This works"<<endl; 
    if ( a = 10 ) 
    cout << "Even this works"<<endl; 
    if ( -5 ) 
    cout << "Surprisingly even this works"<<endl;
















    return 0;
}