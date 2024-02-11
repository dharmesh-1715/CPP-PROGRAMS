#include<iostream>
using namespace std;

int main()
{
    int a=10;
    int *b=&a;
    cout<<"Value of a\t"<<*b<<endl;
    cout<<"Address of a\t"<<b<<endl;
    cout<<"Address of A\t"<<&a<<endl;
    cout<<"value at a\t"<<a<<endl;

    return 0;
}