#include<iostream>
using namespace std;
int main() {
     int n,i,count=0;
     cout<<"Enter a number";
     cin>>n;
     for(i=1;i<n;i++)
     if (n%i==0)
     {count++;}
    if(n==2){
    cout<<"prime number";
    } else{
    cout<<"not a prime number";}
    return 0;}