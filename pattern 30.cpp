#include<iostream>
using namespace std;
int main (){
       char ch='A';
       for(int i=1;i<=5;i++){
    for( int j=1;j<=5;j++)  {
   cout<<ch<<" ";
   if(ch<'Z'){
   ch++;}else
   {ch='A';} } 
      
      
      cout<<endl;}
      return 0;}