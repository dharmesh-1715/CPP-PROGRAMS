#include<iostream>
#include<string>
using namespace std;

class binary
{
    private:
        string s;
    public:
        void take();
        void check();
        void ones_compli();
        void display();
};


void binary :: take ()
{
    cout<<"ENTER THE BINARY NO.:-"<<endl;
    cin>>s;
    check();        //we are calling the function in function itself(nested function)

}


void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!='1' && s.at(i)!='0')
            {
                cout<<"WRONG DATA ENTERED!"<<endl;
                exit (0);
            }
    }
    
}

void binary :: ones_compli()
{   cout<<"YOUR GIVEN BINARY NO WAS:-"<<endl<<s<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='1')
        {
            s.at(i)='0';
        }
        else
        {
            s.at(i)='1';
        }
    }
    display();          //we are calling the function in function itself(nested function)
}

void binary :: display()
{   cout<<"ONES COMPLIMENT IS:-"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}


int main()
{
    binary data;
    data.take();
    data.ones_compli();
    return 0;
}