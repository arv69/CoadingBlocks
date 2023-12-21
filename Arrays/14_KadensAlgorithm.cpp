// Kaden's algorithm for maximum subarray sum
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[1000];
    int currentSum=0;
    int maximumSum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

// Kadens algorithm for maximum subarray sum
for(int i=0;i<n;i++){
   currentSum=currentSum+arr[i];
   if(currentSum<0){
    currentSum=0;
   }
   maximumSum=max(currentSum,maximumSum);
}

    cout<<"maximumSum is "<<maximumSum;
    return 0;
}