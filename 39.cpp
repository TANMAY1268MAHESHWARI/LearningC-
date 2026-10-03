#include <iostream>
using namespace std;
class base
{
protected:
    int a;

private:
    int b;
};
class derived : protected base
{
};
int main()
{
    base b;
    derived d;
    return 0;
}