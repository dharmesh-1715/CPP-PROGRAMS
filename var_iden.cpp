#include<iostream>
using namespace std;

int glo=55;

/*int sum()
{
    int glo,a,b,c;
    cout<<glo+a+b+c;
    return 0;

}*/

int main()
{
    int a,b,c;
    cout<<"enter the abc:-"<<endl;
    cin>>a>>b>>c;
    cout<<"GIVEN NO. ARE:-"<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    cout<<"addition"<<endl;
    auto num=a+b+c;//here the auto is inferring type where data type is assumed 
    cout<<num;
    return 0;
}
