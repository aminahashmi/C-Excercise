#include<iostream>
using namespace std;
int main(){
         int a,b,d=0;
            cout<<"Enter the value of a"<<endl;
            cin>>a;
           while (a>0){
             b=a%10;
             a=a/10;
             d=(d*10)+b;}
             cout<<"reverse is"<<d;
             return 0;
             }