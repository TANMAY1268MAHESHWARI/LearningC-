#include<iostream>
#include<functional>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={1,75,5,13,98,6};
    sort(arr,arr+5);
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<endl;
    }
    

    return 0;
}