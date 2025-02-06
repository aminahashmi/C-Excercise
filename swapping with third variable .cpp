#include<iostream>
using namespace std;
int main (){
    int x,y,temp;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    cout<< "Before swapping" << endl<<"x=" << x << endl<<"y="<<y<<endl;
    
       temp=x;
       x=y;
       y=temp;
       cout<<"Enter the value after swapping" << endl << "x=" << x << endl<< "y=" << y << endl;
       
       return 0;}