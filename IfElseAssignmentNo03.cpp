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

      /*
    Question 5: Write a program to input sides of a triangle and check whether a triangle is equilateral, scalene or 
    isosceles triangle.?

    */
    int side1, side2, side3;
    cout<<"Enter a first side of triangle : "<<endl;
    cin>>side1;
    cout<<"Enter a Second side of triangle : "<<endl;
    cin>>side2;
    cout<<"Enter a Third side of reatangle : "<<endl;
    cin>>side3;
    if(side1==side2==side3){
        cout<<"This is an equilateral traingle."<<endl;
    }
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        cout<<"This is  an Isosceles triangle."<<endl;
        
    }
    else{
        cout<<"This is an Isosceles Triangle."<<endl;
    }


    /*
    Question 6: if the marks of A, B and C are input through the keyword, write a program to deter scoring the least marks.?
    */
    int a,b,c;
    cout<<"Enter a first subject marks of student : "<<endl;
    cin>>a;
    cout<<"Enter a Second subject marks of student : "<<endl;
    cin>>b;
    cout<<"Enter a Third subject marks of student : "<<endl;
    cin>>c;
    if(a<b && a<c){
        cout<<"A has the least marks."<<endl;
    }
    else if(b<a && b<c){
        cout<<"B has the least marks."<<endl;

    }
    else{
        cout<<"C has the least marks."<<endl;
    }

    /*
    Q6: Output:
        Enter a first subject marks of student :
        23
        Enter a Second subject marks of student :
        34
        Enter a Third Subkect marks of student :
        71
        A has the leats marks
    */

   /*
   Question 7: Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
   */
    int x,y;
    cout<<"Enter the two point (x,y) : ";
    cin>>x>>y;
    if(x==0 && y==0){
        cout<<"The point is on the origin."<<endl;
    }
    else if(x==0 && y!=0){
        cout<<"The point lie on the y-axis."<<endl;
    }
    else if(x!=0 && y==0){
        cout<<"The point on the x-axis."<<endl;
    }
    else if(x!=0 && y!=0 ){
        cout<<"The point lies on the plane."<<endl;
    }
    /*
    Q7: Output:
        Enter the two point (x,y) : 2 0
        The point lies on the plane
    */

    /*
    Question 8: Given three points (x1, y1), (x2, y2) and
    
    (x3, y3), write a program to check if all the three points fall on one straight line.
    Input 1: x1 = 1 , y1 = 2 , x2 = 2 , y2 = 3 , x3 = 3 , y3 = 4
    Output 1: All 3 points lie on the same line.
    */
    int x1,y1;
    cout<<"Enter a two point (x1,y1) : ";
    cin>>x1>>y1;
    int x2,y2;
    cout<<"Enter a two point (x2,y2) : ";
    cin>>x2>>y2;
    int x3,y3;
    cout<<"Enter a two point (x3,y3) : ";
    cin>>x3>>y3;
    int Area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
    if(Area==0){
        cout<<"All 3 point lies on the same line."<<endl;
    }
    else {
        cout<<"All 3 point lies on the not same line."<<endl;
    }

    /*
    Question 9: Write a C++ program to input any character and check whether it is the alphabet, digit or special 
    character.
    Input 1: ch = ‘9’
    Output 1: digit
    */
    char c;
    cout<<"Enter a any character : ";
    cin>>c;
    if(c>='A' && c<='Z'){
        cout<<"The character is Capital alphabet. "<<endl;
    }
    else if(c>='a' && c<='z'){
        cout<<"The character is small alphabet."<<endl;
    }
    else if(c>='0' && c<='9'){
        cout<<"The character is digit."<<endl;
    }
    else{
        cout<<"The character is the special character."<<endl;
    }

    /*
    Q9: Output:
        Enter a any charcter : 9
        The character is digit.
    */
     int a = 500, b, c;
        if (a >= 400)
        b = 300;
        c = 200;
        cout << "value of b and c are respectively " << b << " and " << c;

    /*
    Q9: Output:
    value of b and c are respectively  300 and 200
    */




   

}
