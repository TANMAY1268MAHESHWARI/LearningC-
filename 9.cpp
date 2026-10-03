#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "tell me your age" << endl;
    cin >> age;
    if (age < 18)
    {
        cout << "you are not allowed in party" << endl;
    }
    else if (age == 18)
    {
        cout << "you are a kid and get a kid pass" << endl;
    }
    else
    {
        cout << "you are allowed in party" << endl;
    }
    return 0;
}
// switch (expression)
// {
// case constant expression:
//     /* code */
//     break;

// default:
//     break;
// }12
