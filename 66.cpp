#include <iostream>
using namespace std;
template <class t1 = int, class t2 = float,class t3=char>
class tymi
{
public:
    t1 a;
    t2 b;
    t3 c;
    tymi(t1 x,t2 y,t3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
       cout<<"the value of a is "<<a<<endl;
       cout<<"the value of b is "<<b<<endl;
       cout<<"the value of c is "<<c<<endl;
    }
};
int main()
{
tymi<> t(3 ,5.5,'r');
t.display();
cout<<endl;
tymi<float,char,char> g(3.5 ,'r','j');
g.display();

    return 0;
}