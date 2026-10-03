#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    map<string, int> marksmap;
    marksmap["tymi"] = 95;
    marksmap["jack"] = 85;
    marksmap["rahul"] = 62;

    map<string, int>::iterator iter;
    for (iter = marksmap.begin(); iter != marksmap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "size = " << marksmap.size() << endl;
    cout << "max size = " << marksmap.max_size() << endl;
    return 0;
}