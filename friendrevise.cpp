#include<iostream>
using namespace std;

class y;            //to tell compiler that class y lies ahead

class x
{
    private:
        int a;
    public:
        void set(int n1)
        {
            a=n1;
        }
        void print()
        {
            cout<<"value of a is:-\t"<<a<<endl;
        }
        friend void add(x o1,y o2);
}; 

class y
{
    private:
        int b;
    public:
       void set(int n2)
        {
            b=n2;
        }
        void print()
        {
            cout<<"value of b is:-\t"<<b<<endl;
        }
        friend void add(x o1,y o2);
};


void add(x o1,y o2)
{
    cout<<"THE ADDITION IS:-\t"<<o1.a+ o2.b<<endl;
}

int main()
{
    int ch1,ch2;
    cout<<"enter no. to add:-\t"<<endl;
    cin>>ch1>>ch2;
    x c1,tmp;
    c1.set(ch1);
    c1.print();
    y c2;
    c2.set(ch2);
    c2.print();
    add( c1,c2);
    return 0;
}