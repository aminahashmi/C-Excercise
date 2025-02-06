#include<iostream>
using namespace std;
int main (){
    int i=0;
   do{
    cout<<"you are inside the do  while loop:"<<endl;
    cout<<"you are inside the  do while loop press 1 to exit from while loop"<<endl;
    cin>>i;} while (i !=1);
    cout<<"you are outside the do  while loop";
    return 0;
    }