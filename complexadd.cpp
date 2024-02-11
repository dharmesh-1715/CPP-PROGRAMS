#include<iostream>
using namespace std;

class complex 
{
    private:
        int a,b;
    public:
        int get(int a1, int b1);
        int sum(complex o1,complex o2);
        void print (void);
};

int complex :: get(int a1, int b1)
{
    a=a1;
    b=b1;
    return 0;

}

int complex::sum(complex o1,complex o2)
{
   a=o1.a+o2.a;
   b=o1.b+o2.b;
   cout<<"ADDITON OF ABOVE TWO COMPLEX NO. IS:- "<<a<<" + "<<b<<"i"<<endl;
   return 0;
}

void complex :: print(void)
{
    cout<<"THE COMPLEX NO IS:- "<<a<<" + "<<b<<"i"<<endl;
}


int main()
{
    complex obj1,obj2,obj3;
    obj1.get(1,1);
    obj1.print();
    obj2.get(1,1);
    obj2.print();
    obj3.sum(obj1,obj2);
    //obj3.print();
    return 0;
}