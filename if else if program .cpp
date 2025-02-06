#include<iostream>
using namespace std;
int main(){ 
       int mark;
       cout<<"Enter your marks::"<<endl;
       cin>>mark;
       if(mark<0){
       cout<<"invalid marks"<<endl;
       }
       else if(mark<50)
       {
       cout<<"F grade";}
       else if(mark<60){
       cout<<"E grade";}
       else if(mark<70){
       cout<<"F grade";}
       else if(mark<80)
       {
       cout<<"C grade";}
       else if(mark<90)
       {
       cout<<"B grade";}
       else if(mark<=100){
       cout<<"A grade";}
       else {
       cout<<"invalid marks";}
       return 0;}