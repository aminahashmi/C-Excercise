#include<iostream>
using namespace std;
int sum(int a,int b) {
 return a+b;
 }
 double sum(double a, double b){
   return a+b; }
  int main() {
 cout<<sum(12,3)<<endl;
 cout<<sum(12.5,3.5)<<endl;
 }