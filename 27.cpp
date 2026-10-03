#include <iostream>
using namespace std;
class Complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumrealcomplex(Complex, Complex);
};
class Complex
{
    int a, b;
    friend int calculator::sumrealcomplex(Complex, Complex);

public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnumber()
    {
        cout << "your number is " << a << "+" << b << endl;
    }
};

int calculator::sumrealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int main()
{
    Complex o1, o2;
    o1.setnumber(2, 4);
    o2.setnumber(5, 9);
    calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "the sum of real part of o1 and o2 is " << res << endl;

    return 0;
}