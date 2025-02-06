#include<iostream>
using namespace std;
int main(){
        int i,n,fact=1;
        cout<<"enter a number";
        cin>>n;
        for(i=n;i>0;i-- ){
        fact=fact*i;
        } cout<<"your factorial of number is::" <<fact<<endl;
        return 0;}