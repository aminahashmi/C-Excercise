#include<iostream>
using namespace std;
int main() {
     float frh,cel;
     cout<<"enter temperature in Celsius"<<endl;
     cin>>cel;
     frh=(cel+32)*9/5;
     cout<<" Temperature in Celsius::"<<cel<<endl;
     cout<<"Temperature in Fahrenheit::"<<frh<<endl;
     return 0;}