/*
C++ Assignment | fundamentals of programming -1 | Week
*/

#include<iostream>
using namespace std;
int main(){
    /*
    Question 1: Write a Program take 2 integer input an print the greatest of them.?
    */
    int a,b;
    cout<<"Enter a first Number : "<<endl;
    cin>>a;
    cout<<"Enter a Second Number : "<<endl;
    cin>>b;
    if(a>b){
        cout<<"first number "<<a<<"is the largest."<<endl;
    }
    else{
        cout<<"Second number "<<b<<"is the largest."<<endl;
    }

    /*
    Q1: Output1:
        Enter a first Number :
        5
        Enter a Second Number :
        7
        Second number 7 is the largest.
    
    Q1: Output2:
        Enter a first Number :
        12
        Enter a Second Number :
        1
        first number 12 is the largest.
    
    
    */


   /*
   Question 2: Write a Program given the radius of the circl, predict whether numerically 
   the area of this circle is larger than the circumference or not.?
   */
    float radius, pi=3.14;
    cout<<"Enter a radius of circle : "<<endl;
    cin>>radius;
    float Area = pi*radius*radius;
    cout<<"The Area of circle = "<<Area<<endl;
    float circumference = 2*pi*radius;
    cout<<"The Circumfernce of Area = "<<circumference<<endl;
    if(Area>circumference){
        cout<<"Area is greater than circumference."<<endl;
    }
    else{
        cout<<"Circumference is greater than Area."<<endl;
    }

    /*
    Q2: Output:
        Enter a radius of circle : 
        8.3
        The Area of circle = 216.315
        The Circumference of Area = 52.124
        Area is greater than circumference.
    */

   /*
   Question 3: Any year is input through the keyword. Writte a program to determine whether the
    year is a leap year or not.(Considering leap year occurs after every 4 year)
   
   */
    int year;
    cout<<"Enter a any year name : "<<endl;
    cin>>year;
    if(year%4==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    /*
    Q3: Output1:
        Enter a any year name : 
        1976
        YES
    Q3: Output1:
        Enter a any year name:
        2003
        NO        


    */

    /*
    Question 4: Write a program Given the length and breadth of a rectangle, write a program to find whether numerically the area of 
    the rectangle is greater than its perimeter.
    */
    float l,b;
    cout<<"Enter a length of reatangle : "<<endl;
    cin>>l;
    cout<<"Enter a width of reatangle : "<<endl;
    cin>>b;
    float Area = l*b;
    cout<<"The Area of reatangle = "<<Area<<endl;
    float perimeter = 2*(l+b);
    cout<<"The perimeter  of reactangle = "<<perimeter<<endl;
    if(Area>perimeter){
        cout<<"Area is greater than perimeter."<<endl;

    }

    else{
        cout<<"Perimeter is greater than Area."<<endl;
    }

    /*
    Q4: Output:
        Enter a legth of reactangle :
        5.2
        Enter a width of reactangle :
        The Area of reactangle = 44.72

        The perimeter of reactangle = 27.6
        Area is greater than perimeter.
     
    */

   

}