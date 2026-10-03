#include <iostream>
using namespace std;
class employe
{

public:
    int id;
    float salary;
    employe(int inpid)
    {
        id = inpid;
        salary = 35.0;
    }
    employe() {}
};
class programer : public employe
{
public:
    programer(int inpid)
    {
        id = inpid;
    }
    int languagecode = 7;
    void getdata()
    {
        cout << id << endl;
    }
};

int main()
{
    employe tymi(1), harry(2);
    cout << tymi.salary << endl;
    cout << harry.salary << endl;

    programer skillf(15);
    cout << skillf.languagecode << endl;
    cout << skillf.id << endl;
    skillf.getdata();

    return 0;
}