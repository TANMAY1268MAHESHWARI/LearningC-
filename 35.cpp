#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "this is time when constructor is called for obejet number " << count << endl;
    }
    ~num()
    {
        cout << "this is time when my distructor is called f  or obejet number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "we are inside our main function " << endl;
    cout << "creating first object n1 " << endl;
    num n1;
    {
        cout << "entring this block " << endl;
        cout << "creating two more object" << endl;
        num n2, n3;
        cout << "exiting this block " << endl;
    }
    cout << "back to main" << endl;
    return 0;
}