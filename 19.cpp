#include<iostream>
using namespace std;
int add(int a, int b){
    cout<<"using 2 argument func."<<endl;
return a+b;
}
int add(int a, int b, int c){
    cout<<"using 3 argument func."<<endl;
return a+b+c;
}
int main(){
 cout<<"the sum of 10 and 5 is "<<add(10,5)<<endl;  
 cout<<"the sum of 10,2 and 5 is "<<add(10,2,5)<<endl;  
    return 0;
} 