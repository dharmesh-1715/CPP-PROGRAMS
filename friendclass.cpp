#include <iostream>
using namespace std;

class complex
{
private:
    int a, b;
    friend class calculator;

public:
    void set(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void print()
    {
        cout << "the complex no. is :-\t" << a << " + " << b << "i" << endl;
    }
};

class calculator
{
public:
    void sumofreal(complex, complex);
    void sumofimag(complex, complex);
};

void calculator::sumofimag(complex o1, complex o2)
{
    cout << "SUMMATION OF REAL PART IS:-\t" << o1.b + o2.b << endl;
}

void calculator::sumofreal(complex o1, complex o2)
{
    cout << "SUMMATION OF IMAGINAARY PART IS:-\t" << o1.a + o2.a << endl;
}

int main()
{
    complex c1, c2;
    c1.set(5, 10);
    c1.print();

    c2.set(5, 5);
    c2.print();

    calculator calcy;
    calcy.sumofreal(c1, c2);
    calcy.sumofimag(c1, c2);
    return 0;
}