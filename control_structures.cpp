#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"ENTER YOUR AGE:-"<<endl;
    cin>>a;
    if (a<18 && a>0)
    {
        cout<<"you are not allowed"<<endl;
    }
    else if (a<=0)
    {
        cout<<"you are not born yet"<<endl;
    } 
    
    else if (a==18)
    {
        cout<<"you are teenager now go and study well"<<endl;
        cout<<"do you want to join the party???"<<endl;
        cout<<"if you want to join party enter 1 otherwise 2"<<endl;
        int b;
        cin>>b;
        if (b==1)
        {
            cout<<"dont cry you can atttend party just bring your parents with you"<<endl;
        }
        else if (b==2)
        {
            cout<<"good guy now go and study"<<endl;
        }
        else{
            cout<<"Idiote! do correct entry next time"<<endl;
        }

    }
    else
    {
        cout<<"you are perfect adult you have entry in the party come and enjoy"<<endl;
    }
    
    
    
    return 0;
}