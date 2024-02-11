#include <iostream>
using namespace std;

class shop
{
private:
    int itemid[10];

public:
    // static int count; // using the static vaariable to store to store the previous value
    void set_id(void);
    void display(void);
};

// int shop ::count = 0; // initializing the static variable

void shop ::set_id(void)
{
    cout << " enter the valid code (1 for append & 0 for exit):-" << endl;
    int a;
    cin >> a;
    if (a == 1)
    {
        int i=0;
        while (i < 10)
        {
            cout << "enter the ID of Item " << i + 1 << endl;
            cin >> itemid[i];
            i++;
        }
    }
}

void shop ::display(void)
{
    for (int i = 0; i < 10; i++)
    {
        cout << "D OF THE ITEM IS:- \t" << itemid[i] << endl;
    }
}

int main()
{
    shop vani;
    vani.set_id();
    vani.display();

    cout << "THANKS A LOT!" << endl;
    return 0;
}