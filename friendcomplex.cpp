#include<iostream>
using namespace std;
class shivam;
class dk
{
    private:
        int a;
        friend void exchange(dk&,shivam&);
    public:
        void set(int n1)
        {
            a=n1;
        }
        void print()
        {
            cout<<"the previous value of a is :-\t"<<a<<endl;
        }
};

class shivam
{
    private:
        int b;
        friend void exchange(dk&,shivam&);
    public:
        void set(int n2)
        {
            b=n2;
        }
        void print()
        {
            cout<<"the previos value of b is :-\t"<<b<<endl;
        }
};

void exchange(dk&o1,shivam&o2)
{
    int temp=o1.a;
        o1.a=o2.b;
        o2.b=temp;
    cout<<"the exchanged values of a and b are:-"<<o1.a<<" & "<<o2.b<<endl;
}




int main()
{
    dk c1;
    c1.set(3);
    c1.print();
    shivam c2;
    c2.set(5);
    c2.print();
    exchange(c1,c2);
    return 0;
}