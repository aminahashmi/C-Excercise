#include<iostream>
using namespace std;
int main(){
     int i;
     cout<<"Enter any numbers between 1to 5"<<endl;
    cin>>i;
    switch (i) {
    case 1:
    cout<<"you enter one";
    break;
    case 2:
    cout<<"you enter two";
    break;
    case 3:
    cout<<"you enter three";
    break;
    case 4:
    cout<<"you enter four";
    break;
    case 5:
    cout<<"you enter five";
    break;
    default:
    cout<<"invalid number";
    break;}
    return 0;}