#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setprice(void);
    void displayprice(void);
};
void shop ::setprice(void)
{
    cout << "entre id of item no " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "entre price of item " << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item of id " << itemid[i] << " is " << itemprice[i] << endl;
    }
}
int main()
{
    shop kirana;
    kirana.initcounter();
    kirana.setprice();
    kirana.setprice();
    kirana.setprice();
    kirana.setprice();
    kirana.setprice();
    kirana.displayprice();
    return 0;
}