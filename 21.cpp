#include<iostream>
using namespace std;
 class employe
 {
    private:
    int a,b,c;
    public:
    int d,e;
    void setdata(int a1,int b1,int c1);
    void getdata(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
        cout<<"value of c is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;
    }
 };
 void employe :: setdata(int a1,int b1, int c1){
    a=a1;
    b=b1;
    c=c1; 
 }
int main(){
    employe tymi;
    tymi.d =15;
    tymi.e =26;
    tymi.setdata(1,3,4);
    tymi.getdata();
    return 0;
}