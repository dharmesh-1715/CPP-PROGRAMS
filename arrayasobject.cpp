#include <iostream>
using namespace std;

class dharmesh
{
private:
    int age = 19;
    int fav_no = 5;

public:
    float salary;
    void get(void)
    {
        cout << "ENTER THE SALARY AMOUNT:- " << endl;
        cin >> salary;
    }

    void give(void)
    {
        cout << "age is :- " << age << endl;
        cout << "the fav no is :- " << fav_no << endl;
        cout << "the salary is:- " << salary << endl;
    }
};

int main()
{
    dharmesh dk[10];
    for (int i = 0; i < 10; i++)
    {
        dk[i].get();
        dk[i].give();
    }

    return 0;
}