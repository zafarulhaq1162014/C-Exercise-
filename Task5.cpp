#include<iostream>
using namespace std;

int main(){
    int a=5; 
    int b=10;
    cout<<"Before swapping \n";//\n move to next line 
    cout<<"a  = "<<a<<"\t"<<"b  = "<<b<<endl; // (\t) use to longer space 
    int temp=0;
    temp=a;//store a value in temp  ----> 5
    a=b;// store b value in a  (new value of a is  ----->10)
    b=temp;// store temp value in b  (new value of b is ---->5)
    cout<<"After swapping \n";
    cout<<"a = "<<a<<"\t"<<"b   = "<<b<<endl;
    return 0;
}