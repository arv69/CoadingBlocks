#include<iostream>
#include<algorithm>
using namespace std;

int main()

{
    
int arr[10];
cout<<"Enter the element "<<endl;
for(int i=0;i<10;i++){
    cin>>arr[i];
}
int n=10;
// Note that [start ,end) last-1
sort(arr,arr+n-1);  
   for(int i=0;i<n;i++){
    cout<<arr[i]<<",";
   }
    return 0;
}