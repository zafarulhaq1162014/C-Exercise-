#include<iostream>
using namespace std;
void update(int x){
    x++;
}
void update1(int& x){
    x++;
}
int main(){
    int a=5;
    update(a);
    cout<<a<<endl;//after updade by value
    update1(a);
    cout<<a<<endl;//after updade by sending pass by reference 

    return 0;
}
