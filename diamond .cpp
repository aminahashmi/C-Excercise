#include<iostream>
using namespace std;
int main(){
    int i,j,n=5;
    for(i =0;i<n;i++){
    for(j=0;j<n-i;j++){
    cout<<" ";}
    for(j=0;j<(i*2)-1;j++){
    cout<<"*";}
    cout<<endl;}
    
    for(i =n;i>=1;i--){
    for(j=0;j<n-i;j++){
    cout<<" ";}
    for(j=0;j<(i*2)-1;j++){
    cout<<"*";}
    cout<<endl;}
    return 0;}