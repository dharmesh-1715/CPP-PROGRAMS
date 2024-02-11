#include<iostream>
using namespace std;




int swap(int* a, int* b)//this is calling by reference
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    return 0;

}



int main()
{
    int x,y;
    x=100;
    y=200;
    cout<<" PREVIOUS VALUES OF X AND Y ARE:-"<<x<<" & "<<y<<endl;
    swap(&x,&y);
    cout<<" NEW VALUES OF X AND Y ARE:-"<<x<<" & "<<y<<endl;
    return 0;
}