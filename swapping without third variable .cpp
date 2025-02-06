#include<iostream>
using namespace std;
int main(){
       int a,b;
       cout<<"Enter the two numbers"<<endl;
       cin>>a>>b;
       cout<<"the value of a before swapping::"<<a<<endl<<"the value of b before swapping::"<<b<<endl;
        a=a+b;
        b=a-b;
        a=a-b;
        cout<<"the value of a after swapping::"<<a<<endl<<"the value of b after swapping::"<<b<<endl;
        return 0;}
