#include<iostream>
using namespace std;
int main (){
         int year;
         cout<<"Enter the year::"<<endl;
         cin>>year;
         if(year%4==0){
         cout<<year<<"is the leap year.";
         }
         else{
            cout<<year<<"is not a leap year.";}
            return 0;}