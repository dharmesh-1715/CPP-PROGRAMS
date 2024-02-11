#include<iostream>
using namespace std;

class complexx
{
    int a,b;
    public:
        void setnum(int n1 ,int n2)
        {
            a=n1;
            b=n2;
        }
        friend complexx sum_complex(complexx o1, complexx o2);
        void print()
        {
            cout<<"complex no is:-\t"<<a<<" + "<<b<<"i"<<endl;
        }
};


complexx sum_complex(complexx o1, complexx o2)
{
    complexx o3;
    o3.setnum((o1.a+o2.a),(o1.b+o2.b));
}

int main()
{
    complexx c1, c2, c3,sm;
    c1.setnum(1,4);
    c1.print();

    c2.setnum(5,8);
    c2.print();

    sm=sum_complex(c1,c2);
    sm.print();
    return 0;
}