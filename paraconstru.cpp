#include<iostream>
using namespace std;

class para
{
    private:
        int a,b;
    public:
        para(int n1, int n2)
        {
            a=n1;
            b=n2;
        }
        void print()
        {
            cout<<"VALUE OF A IS:-\t"<<a<<endl<<"VALUE OF B IS:-\t"<<b<<endl;
        }
};

int main()
{
    para temp(1,3);
    temp.print();
    return 0;
}