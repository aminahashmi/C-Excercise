#include <iostream>
using namespace std;
int  sum (int a,int b)
{
return a+b;
}
int  sub(int a,int b)
{
return a-b;
}
int  mul(int a,int b)
{
return a*b;
}
int  mod( int a,int b)
{
return a/b;
}
int main ()
{
cout << sum(5,6)<< endl;
cout << sub(5,6)<< endl;
cout << mul(5,6)<< endl;
cout << mod(12,3)<< endl;
return 0;
}

    