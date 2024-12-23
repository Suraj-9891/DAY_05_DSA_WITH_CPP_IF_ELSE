#include<iostream>
using namespace std;
int main(){
    //   for(int i=65; i<=90; i++){
    //     cout<<char(i)<<" "<<i<<endl;
    // }
    // cout<<endl;
    
    // for(int j=97; j<=122; j++){
    //     cout<<char(j)<<" "<<j<<endl;
    // }
    // cout<<endl;
    
    // for(int j=47; j<=57; j++){
    //     cout<<char(j)<<" "<<j<<endl; 
    // }
    
    char a;
    cout<<"Enter a Alphabet letter : "<<endl;
    cin>>a;
    if((a>='a' && a<='z') || (a>='A' && a<='Z')){
        cout<<"The letter is Alphabet."<<a<<endl;
    }
    else{
        cout<<"The letter is not Alphabet."<<a<<endl;
    }
 

    
    
}    
    
    
    