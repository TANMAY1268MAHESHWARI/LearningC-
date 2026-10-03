#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    void getdata(){
        cout<<"the real part is "<<real<<endl;
         cout<<"the imaginary part is "<<img<<endl;
    }
    void setdata(int a,int b){
        real=a;
        img=b;
    }
};
int main(){
    Complex c1;
    Complex *ptr=&c1;
    ptr->setdata(1,54);
    (*ptr).getdata();
   return 0;
}