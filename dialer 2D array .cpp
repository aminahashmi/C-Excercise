#include<iostream>
using namespace std;
int main (){
     int arr[3][3]{{7,8,9},{4,5,6},{1,2,3}};
      for(int i=0;i<3;i++){
      for(int j=0;j<3;j++)
      {
      cout<<arr[i][j]<<" ";}
      cout<<endl;}
      return 0;
      }