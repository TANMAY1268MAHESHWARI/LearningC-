#include<iostream>
using namespace std;
void g();
int sum(int a, int b){
    int c = a+b;
    return c;
}
int main(){
    int num1, num2;
    cout<<"enter 1st"<<endl;
    cin>>num1;
    cout<<"enter 2st"<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2);
    g();
    return 0;
}

void g(){
    cout<<"\n hello bro";
}