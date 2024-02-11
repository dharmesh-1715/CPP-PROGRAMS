#include<iostream>
using namespace std;

class master
{
    private:
        int a,b;
    public:
        int get(int n1, int n2);
        void print();
        friend void dk(master obj);
        

};
 
int master :: get(int n1, int n2)
{
    a=n1;
    b=n2;
    return 0;
}

void master :: print()
{
    cout<<a<<endl<<b<<endl;
}


void dk(master obj)
{
    
    cout<<"this is from friend function"<<endl;
    cout<<obj.a<<endl;
    cout<<obj.b<<endl;
}


int main()
{
    master obj;
    obj.get(151,21 );
    dk(obj);    
    return 0;
}