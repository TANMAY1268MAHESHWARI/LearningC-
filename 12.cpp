#include<iostream>
using namespace std;

int main(){
    int a=5;
    int* b=&a;
    cout<<"the adress of a is "<<&a<<endl;

    cout<<"the value of a is "<<*b;
    return 0;
}