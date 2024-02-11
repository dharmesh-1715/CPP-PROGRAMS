#include<iostream>
using namespace std;

int sum(int a, int b)//function overlaoding
{
    return a+b;
}

int add(int a, int b=10)//DEFAULT ARGUEMENTS
{
    return a+b;
}

int sum(int a, int b,int c)//function overlaoding
{
    return a+b+c;
}

inline int product(int a, int b)//inline fuction copies line of code at place of function calling
{
    return a*b;
}

int main()
{
    int n=sum(5,5);
    cout<<n<<endl;
    int m=sum(5,5,5);
    cout<<m<<endl;
    int p=product(10,20);
    cout<<p<<endl;
    cout<<add(2)<<endl;
    return 0;
}