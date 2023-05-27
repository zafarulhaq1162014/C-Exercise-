#include<iostream>
using namespace std;
bool input(int & a,float &b){
 cout<<"Enter Cost of the meal : ";
    cin>>a;
    cout<<" Enter tax rate : ";
    cin>>b;
    if(a>0)
    return 1;
    else {
        return 0;
    }
}
float percnt(int a,float b){

    return ((b*a)/100);
}
void display(int a,float b,float c){
    cout<<"Cost of The meal : "<<a<<endl;
    cout<<"Tax rate of The meal : "<<b<<endl;
    cout<<"Tip rate of The meal : "<<c<<endl;
    cout<<"Total cost of the meal : "<<(a+b+c)<<endl;
}
int main(){
    int c_meal=0;
    float t_rate=0;
    float tip=20.0;
   if(!input(c_meal,t_rate)){
    cout<<"Invalid input \n ";
     return 0;
   }
   float rate=0;
  rate= percnt(c_meal,t_rate);
    float tiprate=0;
    tiprate=percnt(c_meal,tip);
    display(c_meal,rate,tiprate);

   
    return 0;
}