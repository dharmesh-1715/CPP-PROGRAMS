#include<iostream>
using namespace std;

class dharmesh
{
    private:
        int a,b,c;
    public:
        dharmesh() //constructor
        {   cout<<"hello bro!"<<endl;
            a=10;
            b=20;
            c=30;
        }
        friend void print(dharmesh);
};

void print(dharmesh o1)
{
    cout<<"THE VALUE OF A, B  & C ARE :-"<<o1.a<<" & "<<o1.b<<" & "<<o1.c<<endl;
}
int main()
{
    dharmesh dk,d1,d2,d3; //whenever the object is created constructor is invoked automatically
    print(dk);
    return 0;
}