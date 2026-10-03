#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex(int, int);

    void printnumber()
    {
        cout << "your number is " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y)
{
    a = x;
    b = y;
}
int main()
{
    Complex a(4, 2);
    a.printnumber();
    Complex b = Complex(5, 1);
    b.printnumber();
    return 0;
}