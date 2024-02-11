#include <iostream>
using namespace std;

int main()
{
    int a;
    int &b=a;
    cout<<"ENTER THE AGE(18,21,60):-";
    cin>>a;
    switch (b)
        {
    case 18:
        cout<<"COME TO PARTY";
        break;
    case 21:
        cout<<"YOU SHOULD MARRY ASAP";
        break;
    case 60:
        cout<<"YOU SHOULD REST";
        break;    
    default:
        cout<<"ENTER THE CORRECT VALUE";
        break;
    }

}