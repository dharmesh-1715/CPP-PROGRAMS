#include<iostream>
using namespace std;

int glo=50;

int main()
{
    int a,&b=a,c;//reference variable
    a=55;
    c=20;
    cout<<"value of a:-"<<a<<endl;
    cout<<"value of b:-"<<b<<endl;
    cout<<"value of c:-"<<c<<endl;


    const int s=90;
    cout<<"value of s is :-"<<s<<endl;
    //s=87; it will genrate error as the variable is constant variable


    
    return 0;
}