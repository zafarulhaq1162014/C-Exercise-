#include<iostream>
using namespace std;

int main(){
    char str[]="M Zafar Ul Haq ";

    char *ch=NULL;
    ch=str;
   std:: cout<<ch<<endl;//M Zafar Ul Haq
   std::cout<<*ch<<endl;//M
   std::cout<<(*ch++)<<endl;//M..>to " "
    *ch++;//" " to Z
   std::cout<<*ch<<endl;//Z
   std::cout<<*(++ch)<<endl;//a
   std::cout<<++*ch<<endl;// b


    return 0;
}