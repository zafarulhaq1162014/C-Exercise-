#include<iostream>
using namespace std;

int main(){
     int size=0;
     cout<<"Enter size of a char array : ";
     cin>>size;
     cin.ignore();
     cout<<"Enter a word \n";
      char* p=new char[size]{'\0'};
      cin.getline(p,size);
      cout<<*p<<endl;//base index value
      cout<<p<<endl;//whole

      delete []p;
      p=NULL;
    return 0;
}