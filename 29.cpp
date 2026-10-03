#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(void);

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)
{
    a = 5;
    b = 10;
}
int main()
{
    Complex c, x, y;
    c.printnumber();
    x.printnumber();
    y.printnumber();
    return 0;
}