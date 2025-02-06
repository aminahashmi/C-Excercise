#include<iostream>
using namespace std;
int main (){
      int i,j,x,n=5;
      for(i = 1;i<=n;i++){
      x=i;
      for(j=1;j<=n;j++){
      cout<<x<<" ";
      x+=n;}
      cout<<endl;
      }
      return 0;}