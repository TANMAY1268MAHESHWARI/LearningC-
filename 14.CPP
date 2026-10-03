#include <iostream>
using namespace std;
struct employe
{
    int eid;
    char favchar;
    float salary;
};

int main()
{
    struct employe tymi;
    tymi.eid = 5;
    tymi.favchar = 'a';
    tymi.salary = 1500000;
    cout << tymi.salary << endl;
    cout << tymi.eid << endl;
    cout << tymi.favchar << endl;
    return 0;
}