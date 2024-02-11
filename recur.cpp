#include<iostream>
using namespace std;


int fact(int n)//RECURSIVE FUNCTION WHICH CALLS ITSELF AGAIN AND AGAIN
{
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int fib(int a)//RECURSIVE FUNCTION WHICH CALLS ITSELF AGAIN AND AGAIN
{
    if (a<2)
    {
        return 1;
    }
    return fib(a-1)+fib(a-2);
}

int main()
{
    cout<<"FACTORIAL OF NO.:-"<<endl;
    cout<<"\t"<<fact(5)<<endl;
    cout<<"\t"<<fact(6)<<endl;
    cout<<"\t"<<fact(7)<<endl;
    cout<<"\t"<<fact(8)<<endl;
    cout<<"FIBBONACCI SERIES:-"<<endl;
    cout<<"\t"<<fib(0)<<endl;
    cout<<"\t"<<fib(1)<<endl;
    cout<<"\t"<<fib(2)<<endl;
    cout<<"\t"<<fib(3)<<endl;
    return 0;
}