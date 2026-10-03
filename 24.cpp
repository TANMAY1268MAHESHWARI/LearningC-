#include <iostream>
using namespace std;
class employe
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id " << endl;
        cin >> id;
        count++;
    }   
    void getdata(void)
    {
        cout << "the id of this employe is " << id << " and this is employe number " << count << endl;
    }
};
int employe::count=10000;
int main()
{
    employe tymi, vedu, kesu;
    //    tymi.id=1;
    //    tymi.count=1;
    tymi.setdata();
    tymi.getdata();

    vedu.setdata();
    vedu.getdata();

    kesu.setdata();
    kesu.getdata();

    return 0;
}