#include<iostream>
using namespace std;

int main()
{
    int arr[10];
    // for (int i = 0; i < 10; i++)
    // {
    //    cout<<"enter the value:-\t"<<endl;
    //    int a;
    //    cin>>a;
    //    arr[i]=a;
    //    cout<<"updated!"<<endl; 
       
    // }
    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"elemennt is:-\t"<<arr[i]<<endl;
    // }
     
    int *p=arr;//pointer array
    cout<<"array adddress on memory:-\t"<<p<<endl;

    
    return 0;
}