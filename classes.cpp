#include<iostream>
#include<string>
using namespace std;

class student
{
    private:
        int roll_no, cls;
    public:
        string name;

    void set_data(int a,int b,string c);
    void show_data();  
};

void student :: set_data(int a1,int b1,string c1)
{
    {
        roll_no=a1;
        cls=b1;
        name=c1;
    }  
}

void student :: show_data()
{
    cout<<"NAME OF THE STUDENT IS:-\t"<<name<<endl;
    cout<<"CLASS OF THE STUDENT IS:-\t"<<cls<<endl;
    cout<<"ROLL NO. OF THE STUDENT IS:-\t"<<roll_no<<endl;
}



int main()
{   
    int a,b;
    string c;    
    cout<<"ENTER THE ROLL NO., CLASS & NAME RESP.:-"<<endl;
    cin>>a>>b>>c;
    student s1;
    s1.set_data(a,b,c);
    s1.show_data();
    return 0;
}