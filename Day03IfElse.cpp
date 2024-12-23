/*
if Else : Conditional Statements lecture : 03
*/

#include<iostream>
using namespace std;
int main(){
    /*
    Question 01: Write a Program take positive integer input and tell if it is even or odd.?
    */
    int n;
    cout<<"Enter a any integer number : "<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"The Number is Even."<<endl;
    }
    else{
        cout<<"The Number is Odd."<<endl;
    }

    /*
    Q1: Output:
        # I Result

        Enter a any integer number :
        6
        The Number is Even.

        # II Result.

        Enter a any integer number :
        7
        The Number is Odd.


    */

    /*
    Question 2: Write a Program take positive integer input and tell if it is divisible by or not.?
    */
    int n;
    cout<<"Enter a any integer Number : "<<endl;
    cin>>n;
    if(n%5==0){
        cout<<"The Number is divisible by 5"<<endl;
    }
    else{
        cout<<"The Number is not divisible by 5"<<endl;
    }
    /*
    Q2: Output:
        // I Result
        Enter a any integer Number :
        10
        The Number is divisible by 5

        // II Result
        Enter a any integer Number : 
        8
        The Number is divisible by 5
    */
    /*
    Question 3: Write a Program to given an integer. Print the absolute value of that integer.?
    */
    int n;
    cout<<"Enter a any integer number : "<<endl;
    cin>>n;
    if(n>0){
        cout<<"The value of Number : "<<n<<endl;
    }
    else{
        cout<<"The value of Number : "<<-n<<endl;
    }

    /*
    Q3: Output:
        // I Result

        Enter a any integer number :
        -5
        The value of Number : 5

        // II Resut 

        Enter a any integer number : 
        6
        The value of Number -6
    */

   /*
   Question 4 : If cost price and selling price of an item is 
    input through the keyboard, write a program to 
    determine whether the seller has made profit or 
    incurred loss. Also determine how much profit he 
    made or loss he incurred.

   */
    int cp;
    cout<<"Enter a Cost price : "<<endl;
    cin>>cp;
    int sp;
    cout<<"Enter a Selling price : "<<endl;
    cin>>sp;
    int profit = sp-cp;
    int loss = cp-sp;
    if(sp>cp){
        cout<<"The profit is : "<<profit<<endl;
    }
    else{
        cout<<"The loss is "<<loss<<endl;
    }

    /*
    Q4: output:
        I Result
        Enter a Cost price:
        80
        Enter a Selling price:
        90
        The profit is : 10

        II Result 
        Enter a Cost price:
        90
        Enter a Selling price
        70
        The loss is : 20
    */
    
    /*
    Question 5: Write a program integer input and tell if it 
    is athree digit number or not.?
    */
    int n;
    cout<<"Enter a any positive integer : "<<endl;
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"The Number is three digit."<<endl;
        
    }
    else{
        cout<<"The Number is not three digit."<<endl;
    }

    /*
    I Result 
    Enter a any positive integer : 
    150
    The Number is three digit.

    // II Result
    Enter a any positive integer :
    85
    The Number is not three digit.

    
    */

    /*
    Question 5: Write a Program integer input and tell if it is divisible by 5 and 3.?

    */
    int n;
    cout<<"Enter a any positive integer number : "<<endl;
    cin>>n;
    if(n%5==0 && n%3==0){
        cout<<"The Number is divisible by 5 or 3 "<<endl;
    }
    else{
        cout<<"The Number is not divisible by  5 or 3"<<endl;
    }

    /*
    Q5: Output:
        I Result 

        Enter a any positive integer number :
        15
        The Number is divisible by 5 or 3

        II Result

        Enter a any positive integer number :
        10
        The Number is not divisible by 5 or 3
    */
    
    /*
    Question 6: Take 3 positive integer input and print the greatest of them.?
    
    */

    int a,b,c;
    cout<<"Enter a first Number : "<<endl;
    cin>>a;
    cout<<"Enter a Second Number : "<<endl;
    cin>>b;
    cout<<"Enter a Third Number : "<<endl;
    cin>>c;
    if(a>b && a>c){
        cout<<"The greatest number is A : "<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<"the greatest number is B : "<<b<<endl;
    }
    else{
        cout<<"The greatest number is C : "<<c<<endl;
    }

    /*
    Q6: Output:
        Enter a first Number : 
        8
        Enter a Second Number :
        6
        Enter a Third Number :
        12
        The greatest number is C : 12
    
    */

    /*
    Question 7: Write a progrm to check whether a character is an alphaber or not.
    */

    char a;
    cout<<"Enter a Alphabet letter : "<<endl;
    cin>>a;
    if((a>='a' && a<='z') || (a>='A' && a<='Z')){
        cout<<"The letter is Alphabet."<<a<<endl;
    }
    else{
        cout<<"The letter is not Alphabet."<<a<<endl;
    }

    /*
    Q7: Enter a Aphabet letter :
    S
    The letter is Alphaber : S
    */
    

    /*
    # Nested if-Else
    */

    /*
    Question 7: Write a program take positive integer input and tell if it 
    is divisible by 5 or 3 but not divisible by 15.
    
    */
    int n;
    cout<<"Enter a positive integer number : "<<endl;
    cin>>n;
    if(n%5==0  || n%3==0){
        if(n%15!=0){
            cout<<"The Number is divisible by 5 or 3 but not divisible by 15"<<endl;
        }
        else{
            cout<<"The condition is not found."<<endl;
        }
        
    }

    else{
        cout<<"The condition is not found ."<<endl;
    }


    /*
    Question 8: Take input percentage of a student and print the grade according to marks.?
    1) 91-100 Excellent
    2) 81-90 Very Good
    3) 71-80 Good
    4) 61-70 Can do better
    5) 51-60 Average
    6) 40-50 Below Average
    7) <40 Fail

    */

    int marks;
    cout<<"Enter a marks to find the grade : "<<endl;
    cin>>marks;
    if(marks>90 && marks<=100){
        cout<<"Excellent."<<endl;
    }
    else if(marks>80 && marks<=90){
        cout<<"Very Good."<<endl;
    }
    else if(marks>70 && marks<=80){
        cout<<"Good"<<endl;
    }
    else if(marks>60 && marks<=70){
        cout<<"Can do batter"<<endl;
    }
    else if(marks>50 && marks<=60){
        cout<<"Below Average."<<endl;
    }
    else if(marks<40){
        cout<<"fail"<<endl;
    }

    /*
    Question 9: Write a proggram to check whether a given character is a vowel or a consonant.?
    */  

    char a;
    cout<<"Enter a vowel or consonant character : "<<endl;
    cin>>a;
    if(a=='o' || a=='e' || a=='i' || a=='a' || a=='u'){
        cout<<"The character is vowel."<<endl;
    }
    else {
        cout<<"The character is not consontant."<<endl;
    }

    /*
    Question 10 : Take 3 Number input and tell if they can be the side of a triangle.?
    */

    int a,b,c;
    cout<<"Enter a firts Number : "<<endl;
    cin>>a;
    cout<<"Enter a Second Number : "<<endl;
    cin>>b;
    cout<<"Enter a Third Number : "<<endl;
    cin>>c;
    if(a+b>c){
        cout<<"The side of one triangle : "<<endl;
    }
    else if(b+c>a){
        cout<<"The side of two triangle : "<<endl;

    }
    else if(a+c>b){
        cout<<"The side of three traingle : "<<endl;

    }


    /*
    Question 11: predict the output, if any error detect that
    
    #include<iostream> 
    using namespace std;
    void main(){
    int number = 0;
    if(number > 0) cout << "Number is positive.";
    if(number <> 0) cout << "Number is not negative.";
    
    Ouput : Error
    }

    Question 12: Predict the output 
    
    #include<iostream>
    using namespace std;
    int main(){
    int score = 100; 
    if (score == 100) cout << " You win ";
    else cout << " You lose ";
    return 0;
    }

    Output : You win



    Question 13: Predict the output 
    int main(){
    int num1=5, num2=4, num3=3;
    if(num1 > num2 <& num1 > num3)cout<<”Number1.”<<endl;
    if(num2 > num1 <| num2 > num3)cout<<”Number2.”<<endl;
    if(num3 > num1 <& num3 > num2)cout<<”Number3.”<<endl;
    return 0;
    }

    Output :
    Number 1.
    Number 2.


    THANK YOU

    */
















    return 0;
}