#include<iostream>
using namespace std;

int main()
{
char op;
float num1,num2,num3;
cout<<"enter 1st number "<<endl;
cin>>num1;
cout<<"enter 1st operation(+,-,*,/)"<<endl;
cin>>op;
cout<<"enter 2nd number"<<endl;
cin>>num2;
cout<<"enter 2nd operation(+,-,*,/):"<<endl;
cin>>op;
cout<<"enter 3rd number"<<endl;
cin>>num3;
switch (op)
{
case'+':
cout<<num1<<"+"<<num2<<"+"<<num3<<"="<<num1+num2+num3<<endl;
break;
case'-':
cout<<num1<<"-"<<num2<<"-"<<num3<<"="<<num1-num2-num3<<endl;
break;
case'*':
cout<<num1<<"*"<<num2<<"*"<<num3<<"="<<num1*num2*num3<<endl;
break;
case'/':
cout<<num1<<"/"<<num2<<"/"<<num3<<"="<<num1/num2/num3<<endl;
break;
default :
cout<<"error!operator is not correct:"<<endl;
break;
}
    return 0;
}