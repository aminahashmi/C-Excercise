#include<iostream>
using namespace std;
double sum(double a, double b) {
         return a+b;}
 double sub(double a, double b) {
         return a-b;} 
  double mul(double a, double b)  {
         return a*b;}  
  double div(double a, double b)  {
          if(b!=0){
          return a/b;}
          else {
          cout<<"error division";
          } }    
          int main()  {
          double num1,num2;
          char operation ;
          cout<<"Enter first number:";
          cin>>num1;
          cout<<"Enter any operator(+,-,*,/)";
          cin>>operation;
          cout<<"Enter second number:";
          cin>>num2;
          switch (operation){
          case '+':
          cout<<"result:"<<sum(num1,num2)<<endl;
          break;
          case '-':
          cout<<"result:"<<sub(num1,num2)<<endl;
          break;
          case '*':
          cout<<"result:"<<mul(num1,num2)<<endl;
          break;
          case'/':
          cout<<"result:"<<div(num1,num2)<<endl;
          break;
          default:
          cout<<"error invalid operater";
          break;
          }
          return 0;}
          