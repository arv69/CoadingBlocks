#include<iostream>
using namespace std;

int main()
{
    int arr[10]={0};
    for(auto i:arr)
        cout<<i<<","; 
    cout<<endl;
    cout<<sizeof(arr)<<endl;
    cout<<"No of element "<<sizeof(arr)/4;
    return 0;
}