#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    for(i =0;i<n;i++){
    for(j=0;j<n+1-i;j++){
    cout<<" ";}
    for(j=0;j<=i;j++){
    cout<<"*";}
    cout<<endl;}
    return 0;}